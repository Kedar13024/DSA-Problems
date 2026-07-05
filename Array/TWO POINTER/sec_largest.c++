#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(const vector<int>& arr){
    int n=arr.size();
    int largest=INT_MIN;
    int sec_largest=INT_MIN;

    if(arr.empty()) return -1;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]<largest and arr[i]> sec_largest){
                sec_largest=arr[i];
            }
        }
    }
    return sec_largest;
}

int main() {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={6,7,1,3,0,2,4};
    vector<int> arr3={5,5,5,5};
    vector<int> arr4={};
    cout<<solution(arr1)<<endl;
    cout<<solution(arr2)<<endl;
    cout<<solution(arr3)<<endl;
    cout<<solution(arr4)<<endl;
    return 0;
}