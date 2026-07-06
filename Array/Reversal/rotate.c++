#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>& left_rotation(vector<int>& arr,int pos){

    int n=arr.size();
    if(n==0) return arr;
    pos=pos%n;//Avoids unnecessary rotaion 

    //Rotate to the left
    reverse(arr.begin(),arr.begin()+pos);
    reverse(arr.begin()+pos,arr.end());
    reverse(arr.begin(),arr.end());

    return arr;
}

vector<int>& right_rotation(vector<int>& arr,int pos){

    int n=arr.size();
    if(n==0) return arr;
    pos=pos%n;//Avoids unnecessary rotaion 

    //Rotate to the right
    reverse(arr.begin(),arr.begin()+(n-pos));
    reverse(arr.begin()+(n-pos),arr.end());
    reverse(arr.begin(),arr.end());

    return arr;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={6,7,1,3,0,2,4};
    int pos=2;
    left_rotation(arr1,2);right_rotation(arr2,2);
    for(int i:arr1) cout<<i<<" ";cout<<endl;
    for(int i:arr2) cout<<i<<" ";cout<<endl;
    return 0;
}
