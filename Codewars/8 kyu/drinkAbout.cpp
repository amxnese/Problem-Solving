/*
Kids drink toddy.
Teens drink coke.
Young adults drink beer.
Adults drink whisky.
Make a function that receive age, and return what they drink.

Rules:

Children under 14 old.
Teens under 18 old.
Young under 21 old.
Adults have 21 or more.

    Examples:
13 --> "drink toddy"
17 --> "drink coke"
18 --> "drink beer"
20 --> "drink beer"
30 --> "drink whisky"
*/
#include <string>
using namespace std;

// My Solution
string people_with_age_drink(int age) {
    return  age < 14 ? "drink toddy":
            age < 18 ? "drink coke" :
            age < 21 ? "drink beer" : "drink whisky";
}

// Switch
string people_with_age_drink1(int age){
    switch(age){
    case 0  ... 13 : return "drink toddy";
    case 14 ... 17 : return "drink coke";
    case 18 ... 20 : return "drink beer";
    case 21 ... 90 : return "drink whisky";
}
}