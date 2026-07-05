#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<int>& solution(vector<int>& arr) {
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;

    while (left<right)
    {
       swap(arr[left], arr[right]);
       left++;
       right--;

    }
    return arr;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={6,7,1,3,0,2,4};
    solution(arr1);solution(arr2);
    for(int num:arr1) cout<<num<<" ";
    cout<<endl;
    for(int num:arr2) cout<<num<<" ";
    cout<<endl;
    return 0;
}
