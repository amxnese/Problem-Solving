/*
The first century spans from the year 1 up to and including the year 100,
the second century - from the year 101 up to and including the year 200, etc.

Task
Given a year, return the century it is in.
*/
// My Solution
int centuryFromYear(int year)
{
    return (year % 100 ? (year / 100)+1 : year / 100);
}

// Best Practice
constexpr int centuryFromYear1(int year) 
{
    return (year + 99) / 100;
}