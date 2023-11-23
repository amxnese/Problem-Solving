/*
Complete the function so that it finds the average of the three scores 
passed to it and returns the letter value associated with that grade.

Numerical Score	Letter Grade
90 <= score <= 100	'A'
80 <= score < 90	'B'
70 <= score < 80	'C'
60 <= score < 70	'D'
0 <= score < 60	'F'
Tested values are all between 0 and 100. Theres is no need to check for 
negative values or values greater than 100.
*/

// My Solution
char getGrade(int a, int b, int c) {
    int avg = (a + b + c) / 3;
    switch(avg){
        case 0 ... 59 : return 'F';
        case 60 ... 69 : return 'D';
        case 70 ... 79 : return 'C';
        case 80 ... 89 : return 'B';
        case 90 ... 100 : return 'A';
        default : return 'S';
    }
}