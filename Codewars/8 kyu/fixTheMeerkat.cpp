/*
You're at the zoo... all the meerkats look weird. Something has gone 
terribly wrong - someone has gone and switched their heads and tails around!

Save the animals by switching them back. You will be given an array 
which will have three values (tail, body, head). It is your job to 
re-arrange the array so that the animal is the right way round (head, body, tail).

Same goes for all the other arrays/lists that you will get in the 
tests: you have to change the element positions with the same exact logics

Simples!
*/
#include <array>
#include <string>
using namespace std;

// My Solution
array<string, 3> fixTheMeerkat(array<string, 3> arr){
    array<string, 3> ret;
    for(int i = 0; i < 3; i++){
        ret[i] = arr[2 - i];
    }
    return ret;
}

// Best Practice

array<string, 3> fixTheMeerkat1(const array<string, 3>& xs) {
    return {xs[2], xs[1], xs[0]};
}

// Best Practice 2
array<string, 3> fixTheMeerkat2(array<string, 3> arr) {
    reverse(arr.begin(), arr.end());
    return arr;
}