#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size(),m=arr2.size();
    int i=0,j=0;
    vector<int>ans;
    while (i<n and j<m)
    {
        if(arr1.at(i)<arr2.at(j)){i++;}
        else if(arr1.at(i)>arr2.at(j)){j++;}
        else{ans.push_back(arr1.at(i));i++;j++;}
    }
    
    return ans;
}

int main() {
    vector<int> arr1={1,2,2,3,5,7};
    vector<int> arr2={2,2,2,3,4,5,6};
    vector<int> ans=solution(arr1,arr2);
    for(int i:ans) cout<<i<<" ";cout<<endl;
    return 0;
}