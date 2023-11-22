/*
Complete the solution so that it reverses all of the words within 
the string passed in.

Words are separated by exactly one space and there are no leading or 
trailing spaces.

Example(Input --> Output):

"The greatest victory is that which requires no battle" --> "battle 
no requires which that is victory greatest The"
*/

// My Solution
#include <string>
using namespace std;
string reverse_words(const string& str) {
    string ret = "";
    int prv = str.size();
    for(int i = str.size(); i > 0; i--){
        if(str[i] == ' '){
            ret += str.substr(i + 1, prv - i) + " ";
            prv = i - 1;
        }
    }
    ret += str.substr(0 , prv+1);
    return ret;
}

// Best Practice
#include <string>
using namespace std;
string reverse_words(const string& str){
    string result = "";
    string temp = ""; // this
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
        result = temp + " " + result;
        temp = "";
        }
        else{
            temp += str[i];
        }
    }
    result = temp + " " + result;
    result.pop_back();
    return result;
}