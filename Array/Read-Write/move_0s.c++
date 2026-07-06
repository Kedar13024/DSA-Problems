#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//One Pass
vector<int>& solution(vector<int>& arr){
    int n=arr.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0 && i!=j){
            swap(arr.at(i),arr.at(j));
            j++;
        }
    }
    return arr;
}
/*
//Two Pass
vector<int>& solution(vector<int>& arr){
    int n=arr.size();
    int j=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }

    while(j<n){arr[j]=0;j++;}
    return arr;
}
*/

int main() {
    vector<int> arr1={0,2,0,4,5,6};
    vector<int> arr2={0,7,0,3,0,0,4};
    solution(arr1);solution(arr2);
    for(int i:arr1) cout<<i<<" ";cout<<endl;
    for(int i:arr2) cout<<i<<" ";cout<<endl;
    return 0;
}