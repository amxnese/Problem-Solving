/*
I would like to be able to pass an array with two elements to my swapValues 
function to swap the values. However it appears that the values aren't changing.
Can you figure out what's wrong here?
*/
#include <utility>
#include <utility>
using namespace std;

// My Solution
std::pair<int, int> swap_values1(std::pair<int, int> values) {
    int temp = values.first;
    values.first = values.second;
    values.second = temp;
    return values;
}

// Best Practice
pair<int, int> swap_values1(pair<int, int> values) {
    swap(values.first, values.second);
    return values;
}