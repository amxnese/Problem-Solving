/*
It's the academic year's end, fateful moment of your school report. 
The averages must be calculated. All the students come to you and entreat 
you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.
*/

//My Solution
#include <vector>
#include <numeric>
using namespace std;
int get_average(vector <int> marks)
{
    return accumulate(marks.begin(),marks.end(),0) / marks.size();
}