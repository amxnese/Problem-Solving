/*
Complete the function which takes two arguments and returns all numbers 
which are divisible by the given divisor. First argument is an array of 
numbers and the second is the divisor.

Example(Input1, Input2 --> Output)
[1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]
*/

// My Solution
using namespace std;
vector<int> divisible_by(vector<int> numbers, int divisor){
    vector<int> ret;
    for(int i : numbers){
        if(i % divisor == 0) ret.push_back(i);
    }
    return ret;
}