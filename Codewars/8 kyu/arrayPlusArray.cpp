/*
I'm new to coding and now I want to get the sum of two arrays... Actually the 
sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.
*/
#include <vector>
#include <numeric>

// My Solution
using namespace std;
int arrayPlusArray(vector<int> a, vector<int> b) {
    int ret = 0;
    for(int i : a){
        ret += i;
    }
    for(int i : b){
        ret += i;
    }
    return ret;
}

// Best Practice

int arrayPlusArray(vector<int> a, vector<int> b){
    return accumulate(a.begin(), a.end(), 0) + accumulate(b.begin(), b.end(), 0);
}