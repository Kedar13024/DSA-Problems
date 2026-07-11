#include <iostream>
#include <vector>
using namespace std;

int solution(const vector<int>& arr) {
    if (arr.empty()) return 0;

    int lowestPrice = arr[0];
    int maxProfit = 0;

    for (int i = 1; i < arr.size(); i++) {
        lowestPrice = min(lowestPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - lowestPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {7, 1, 5, 3, 6, 4};

    cout << solution(arr2) << '\n';
    return 0;
}