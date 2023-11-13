/*
Your task is to sum the differences between consecutive pairs in the array
in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9
*/
#include <vector>
#include <algorithm>

// My Solution
using namespace std;
int sumOfDifferences(vector<int> arr){
    int result = 0;
    sort(arr.rbegin(),arr.rend());
    for(int i = 0;i + 1< arr.size();i++){
        result += arr[i] - arr[i+1];
    } return result;
}

// Best Practice 
int sumOfDifferences1(const vector<int>& arr) {
    if (arr.empty()) return 0;
    auto p = minmax_element(arr.cbegin(), arr.cend());
    return *p.second - *p.first;
}