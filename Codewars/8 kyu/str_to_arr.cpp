/*
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", 
"are", "my", "favorite"]
*/
#include <vector>
#include <string>
using namespace std;

// My Solution
vector<string> string_to_array(const string& s) {
    vector<string> ret;
    int prv = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == ' '){
            ret.push_back(s.substr(prv, i - prv));
            prv = i + 1;
        }
    }
    ret.push_back(s.substr(prv));
    return ret; 
}

// Best Practice
#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array1(const string& s) {
    vector<string> res;
    stringstream ss(s + " ");
    string word;

    while (getline(ss, word, ' ')) res.push_back(word);
    return res;
}

