/*
Complete the square sum function so that it squares each number passed 
into it and then sums the results together.
For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9
*/
#include <vector>
#include <numeric>
using namespace std;

// My Solution
int square_sum(const vector<int>& numbers)
{
    int result = 0;
    for(int i : numbers){
        result += i*i;
    }return result;
}

// Best Practice 

int square_sum1(const std::vector<int>& numbers)
{
    return accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {return a + b * b;});
}