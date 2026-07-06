#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool solution(const vector<int>& arr){
    int n=arr.size();    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={5,3,2,8,1,9};
    cout<<solution(arr1)<<endl;
    cout<<solution(arr2)<<endl;
    return 0;
}