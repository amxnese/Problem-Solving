/*
Your goal is to return multiplication table for number that is always an 
integer from 1 to 10.

For example, a multiplication table (string) for number == 5 looks like below:

1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30
7 * 5 = 35
8 * 5 = 40
9 * 5 = 45
10 * 5 = 50
*/

// My Solution
#include <string>
using namespace std;
string multi_table(int number)
{
    string ret = "" ;
    for(int i = 1 ; i <= 10 ; i++){
        ret += to_string(i) + " * " + to_string(number) + " = " + to_string(number*i) + (i == 10 ? "" : "\n");
    }
    return ret; 
}

// Best Practice
string multi_table1(int number)
{
    string ans;
    for (size_t i = 1; i <= 10; i++)
        ans += to_string(i) + " * " + to_string(number) + " = " + to_string(i*number) + "\n";
    ans.pop_back();
    return ans;
}