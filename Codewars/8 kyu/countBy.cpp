/*
Create a function with two arguments that will return an array of the first n 
multiples of x.

Assume both the given number and the number of times to count will be positive 
numbers greater than 0.

Return the results as an array or list ( depending on language ).

Examples
countBy(1,10)  should return  {1,2,3,4,5,6,7,8,9,10}
countBy(2,5)  should return {2,4,6,8,10}
*/
#include <vector>
using namespace std;

// My Solution
vector<int> countBy(int x,int n){
    vector<int> result = {x};
    for(int i = 0 ; i < n-1 ; i++){
        result.push_back(result[i] + result[0]);
    } 
    return result;
}

// Best Practice
vector<int> countBy1(int x,int n){
    vector<int> z;
    if(x == 0){return {};}
    if(n == 0){return {};}
    int i;
    for(i=1;i<=n;i++){
        z.push_back(i*x);
    }
    
    return z;
}