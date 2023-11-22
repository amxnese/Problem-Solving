/*
Given an array of integers.

Return an array, where the first element is the count of positives numbers 
and the second element is sum of negative numbers. 0 is neither positive 
nor negative.

If the input is an empty array or is null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you 
should return [10, -65].
*/

// My Solution
#include <vector>
using namespace std;
vector<int> countPositivesSumNegatives(vector<int> input){
    if(input.size() == 0)return {};
    vector<int> ret;
    int count = 0,sum = 0;
    for(int i : input){
        if(i > 0)
            count++;
        else
            sum += i;
    }
    ret.push_back(count);
    ret.push_back(sum);
    return ret;
}