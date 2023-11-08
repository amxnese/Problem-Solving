/*
Create a function that accepts a string and a single character,
and returns an integer of the count of occurrences the 2nd argument
is found in the first one.
If no occurrences can be found, a count of 0 should be returned.
*/
#include <string>
#include <algorithm>

// My Solution
unsigned int strCount(const std::string& word, char letter){
    int count = 0;
    for(int i : word){
        if(i == letter)
            count++;
    }
    return count;
}

// Best Practice
unsigned strCount1(const std::string& word, char letter) {
    return std::count(word.cbegin(), word.cend(), letter);
}