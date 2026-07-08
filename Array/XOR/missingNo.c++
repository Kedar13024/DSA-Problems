#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& arr){
    int n=arr.size();
    int xor1=0,xor2=0;
    for (int i = 0; i < n; i++)
    {
        xor1^=i;
        xor2^=arr[i];
    }
    xor1^=n;
    return xor1^xor2;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={0,1,2,4};
    cout<<solution(arr1)<<endl;
    cout<<solution(arr2)<<endl;
    return 0;
}