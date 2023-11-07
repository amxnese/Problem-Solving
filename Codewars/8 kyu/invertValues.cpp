/*
Given a set of numbers, return the additive inverse of each.
Each positive becomes negatives, and the negatives become positives.
*/

//My Solution 
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    for(int i = 0; i < values.size();i++){
        values[i] *= -1;
    }
    return values;
}

//Best Practice
#include <algorithm>
std::vector<int> invert(std::vector<int> values)
{
    transform(values.begin(), values.end(), values.begin(), std::negate<int>());;
    return values;
}