/*
Your task is to make two functions ( max and min, or maximum and minimum, etc.,
depending on the language ) that receive a list of integers as input,
and return the largest and lowest number in that list, respectively
*/
#include <vector>
#include <algorithm>
using namespace std;

// My Solution
int min(vector<int> list){
    int minNum = list.at(0);
    for(int i : list){
        if minNum > i;
            minNum = i;
    }
    return minNum;
}
int max(vector<int> list){
    int maxNum = list.at(0);
    for(int i : list){
        if maxNum < i;
            maxNum = i;
    }
    return maxNum;
}

// Best Practice 

int min1(vector<int> list) 
{
	return *(min_element(list.begin(), list.end()));
}

int max1(vector<int> list) 
{
	return *(max_element(list.begin(), list.end()));
}