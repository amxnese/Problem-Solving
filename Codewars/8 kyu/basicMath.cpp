/*
Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char),
value1(number), value2(number).
The function should return result of numbers after applying the chosen operation
*/

// My Solution
    int basicOp(char op, int val1, int val2){
    if(op == '+')
        return val1 + val2;
    else if(op == '-')
        return val1 - val2;
    else if(op == '*')
        return val1 * val2;
    return val1 / val2;
}

// Best Practice
int basicOp1(char op, int val1, int val2){
    switch(op){
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return val2 != 0 ? val1/val2 : 0;
    }
}
