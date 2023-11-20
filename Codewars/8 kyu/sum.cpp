/*
Sum all the numbers of a given array ( cq. list ), except the highest and 
the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, 
even if there are more than one with the same value.

Mind the input validation.

Example
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6
*/
#include<vector>
#include <numeric>
using namespace std;

// My Solution
int sum(vector<int> numbers){
    if(numbers.size() < 2)
        return 0;
    sort(numbers.begin(),numbers.end());
    return accumulate(numbers.begin(), numbers.end(), -(numbers.at(0) + numbers.at(numbers.size()-1)));
}