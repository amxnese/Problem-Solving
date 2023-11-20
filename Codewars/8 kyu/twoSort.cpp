/*
You will be given a list of strings. You must sort it alphabetically 
(case-sensitive, and based on the ASCII values of the chars) and then 
return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.
#include <algorithm>
*/
#include <vector>
#include <string>
using namespace std;

// My Solution
string twoSort(vector<string> s)
{
    string ret;
    sort(s.begin(),s.end());
    for(int i = 0;i < s[0].size();i++){
        ret += s[0][i];
        ret += i != s[0].size()-1 ? "***" : "";
    }
    return ret;
}

// Best Practice
string twoSort1(vector<string> s)
{
    string result = *min_element(s.begin(), s.end());
    for (int i = 1; i < result.size(); i += 4)
        result.insert(i, "***");
    return result;
}

#include <regex>

string twoSort2(vector<string> s)
{
    return regex_replace(*min_element(s.begin(), s.end()),regex{"(?!^)(.)"}, "***$1");
}