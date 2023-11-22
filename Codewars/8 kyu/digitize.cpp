/*
Given a random non-negative number, you have to return the digits of this 
number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]
*/

// My Solution
using namespace std;
vector<int> digitize(unsigned long n){  
    if(n == 0)return {0};
    vector<int> result;
    while (n != 0){
        result.push_back(n % 10);
        n = long(n / 10);
    }
    return result;
}

// Best Practice
vector<int> digitize1(unsigned long n) 
{     
        vector<int> digits;
        do {
            digits.push_back (n % 10);
            n /= 10;
        }while (n > 0);
        return digits;
}