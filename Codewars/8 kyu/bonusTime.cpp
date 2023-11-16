/*
It's bonus time in the big city! The fatcats are rubbing their paws in 
anticipation... but who is going to make the most money?

Build a function that takes in two arguments (salary, bonus). Salary will 
be an integer, and bonus a boolean.

If bonus is true, the salary should be multiplied by 10. If bonus is false, 
the fatcat did not make enough money and must receive only his stated salary.
*/
#include<string>
using namespace std;

// My Solution
string bonus_time(int salary, bool bonus)
{
    return bonus ? "$" + to_string(salary * 10 ): "$" + to_string(salary);
}

// Nice Idea
string bonus_time1(int salary, bool bonus)
{
    return "$" + to_string(salary) + (bonus ? "0" : "");
}
