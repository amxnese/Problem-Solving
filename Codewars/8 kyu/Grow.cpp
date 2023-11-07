/*
Given a non-empty array of integers, return the result of multiplying the
values together in order. 
Example: [1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

// My Solution
int grow(vector<int> nums) {
    int result = 1;
    for(int i : nums){
        result *= i;
    }return result;
}

// Best Practice
int grow(const vector<int>& nums) {
    return accumulate(nums.cbegin(), nums.cend(), 1, multiplies<int>());
}