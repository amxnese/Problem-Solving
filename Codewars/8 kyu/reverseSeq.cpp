/*
Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]
*/

// My Solution
using namespace std;
vector<int> reverseSeq(int n) {
    vector<int> ret;
    for(int i = n; i > 0;i--)
        ret.push_back(i);
    return ret;
}