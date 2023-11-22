/*
You're writing code to control your town's traffic lights. You need a 
function to handle each change from green, to yellow, to red, and then 
to green again.

Complete the function that takes a string as an argument representing 
the current state of the light and returns a string representing the 
state the light should change to.

For example, when the input is green, output should be yellow.
*/
#include <string>
#include <stdexcept>
using namespace std;

// My Solution
string update_light(string current) {
    if(current == "red")
        return "green";
    else if(current == "green")
        return "yellow";
    return "red";
}

// Best Practice
#include <string>
string update_light(const string& current) {
    if(current == "green") return "yellow";
    if(current == "yellow") return "red";
    if(current == "red") return "green";
    throw invalid_argument{ "Only \"green\", \"yellow\" and \"red\" are allowed!" };
}