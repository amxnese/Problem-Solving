/*
Consider an array/list of sheep where some sheep may be missing from 
their place. We need a function that counts the number of sheep present
in the array (true means present)
*/
#include <vector>
#include <algorithm>
using namespace std; 

// My Solution
int count_sheep(vector<bool> arr) 
{
    if(!arr)
        return NULL;
    int result = 0;
    for(int i : arr){
        i ? result++;
    }return result;
}

// Best Practice
int count_sheep1(vector<bool> v) {
    return count(v.cbegin(), v.cend(), true);
}