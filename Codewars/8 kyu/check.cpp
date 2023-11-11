/*
You will be given an array a and a value x. All you need to do is check whether 
the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not.
*/
#include <vector>
#include <string>
using namespace std;

// My Solution
bool check(const vector<string>& seq, const string& elem) {
    for(auto i : seq){
        if(i == elem) return true;
    }return false;
}