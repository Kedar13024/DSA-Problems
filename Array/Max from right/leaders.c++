#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int>& arr){
    int n=arr.size();
    vector<int>ans;
    int maxRight=arr[n-1];
    ans.push_back(maxRight);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxRight){
            ans.push_back(arr[i]);
            maxRight=arr[i];
        }
    }
    return ans;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={6,7,1,3,0,2,4};
    vector<int> arr3={6,5,4,3,2,1};
    vector<int> arr4={10};
    vector<int> arr5={-2,-1,0};
    vector<int>ans=solution(arr5);
    for(int i:ans) cout<<i<<" ";
    return 0;
}