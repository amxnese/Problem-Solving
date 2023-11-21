/*
You get an array of numbers, return the sum of all of the positives ones.

Example [1,-4,7,12] => 1 + 7 + 12 = 20

Note: if there is nothing to sum, the sum is default to 0.
*/
#include <vector>
using namespace std;
// My Solution
int positive_sum (const vector<int> arr){
    int ret = 0;
    for(int i : arr){
        if(i > 0)
            ret += i;
    }
    return ret;
}
