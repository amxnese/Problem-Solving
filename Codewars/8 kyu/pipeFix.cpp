/*
Looks like some hoodlum plumber and his brother has been running around 
and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before 
you receive any more complaints.

The pipes are correct when each pipe after the first is 1 more than the 
previous one.

Task
Given a list of unique numbers sorted in ascending order, return a new 
list so that the values increment by 1 for each index from the minimum 
value up to the maximum value (both included).

Example
Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8
*/

// My Solution
#include <vector>
using namespace std;
vector<int> pipe_fix(const vector<int>& nums) {
    int first = nums.front() , last = nums.back();
    vector<int> ret;
    for(int i = first;i <= last; i++){
        ret.push_back(i);
    }
    return ret;
}

// Using iota
#include <algorithm>
#include <numeric>
vector<int> pipe_fix1(const vector<int>& nums) {  
    auto [min, max] = minmax_element(nums.begin(), nums.end());
    vector<int> v(*max - *min + 1);
    iota(v.begin(), v.end(), *min);
    return v;
}