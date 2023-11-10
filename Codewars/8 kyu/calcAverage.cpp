/*
Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.
*/
#include <vector>
#include <numeric>
using namespace std; 

// My Solution
double calcAverage(const vector<int>& values) {
    double average = 0;
    for(int i : values)
        average += i;
    return average / values.size();
}

// Best Practice 

double calcAverage1(const vector<int>& values){
    return accumulate(values.begin(),values.end(), 0.0) / values.size();
}