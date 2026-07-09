#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& arr){
    int n=arr.size();
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans^=arr.at(i);
    }
    return ans;
}

int main() {
    vector<int> arr1={4,2,2,1,1};
    cout<<solution(arr1);
    return 0;
}