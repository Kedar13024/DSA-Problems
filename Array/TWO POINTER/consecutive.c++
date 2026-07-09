#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& arr){
    int n=arr.size();
    int count=0,maxCount=0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr.at(i)==1)
        {
            count++;
            maxCount=max(count,maxCount);
        }
        else
        {
            count=0;
        }   
    }
    
    return maxCount;
}

int main() {
    vector<int> arr1={1,1,0,1,1,1};
    vector<int> arr2={};
    cout<<solution(arr2);
    return 0;
}