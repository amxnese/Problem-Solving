/*
We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

Examples (input --> output):
123  --> "123"
999  --> "999"
-100 --> "-100"
*/

// My Solution
#include <string>
using namespace std;
string number_to_string(int num) {
    return to_string(num);
}   