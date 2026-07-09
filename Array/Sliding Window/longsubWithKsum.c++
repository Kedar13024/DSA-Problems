#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& arr,int k){
    int n=arr.size();
    int left=0,sum=0,maxLen=0;

    for (int right= 0; right < n; right++)
    {
        sum+=arr.at(right);
        while (sum>k)
        {
            sum-=arr.at(left);
            left++;
        }
        
        if (sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        
    }
    
    return maxLen;
}

int main() {
    vector<int> arr={2,1,1,1,3};
    int k=4;
    cout<<solution(arr,k);
    return 0;
}