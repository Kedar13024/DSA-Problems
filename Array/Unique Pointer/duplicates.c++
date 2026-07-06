#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& arr){
    int n=arr.size();
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}

int main() {
    vector<int> arr1={1,1,2,2,3,4,4,4};
    vector<int> arr2={2,4,4,5,7,8,8};
    cout<<solution(arr1)<<endl;
    cout<<solution(arr2)<<endl;
    for(int i:arr1) cout<<i<<" ";
   
    return 0;
}