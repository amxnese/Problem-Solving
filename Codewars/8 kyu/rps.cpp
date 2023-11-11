/*
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"
*/
#include <string>
using namespace std;

// My Solution
string rps(string p1, string p2)
{
    if(p1==p2)
        return "Draw!";
    if(p1 == "scissors" && p2 == "paper"){
        return "Player 1 won!";
    }else if(p1 == "scissors" && p2 == "rock"){
        return "Player 2 won!";
    }else if(p1 == "rock" && p2 == "paper"){
        return "Player 2 won!";
    }else if(p1 == "rock" && p2 == "scissors"){
        return "Player 1 won!";
    }else if(p1 == "paper" && p2 == "rock"){
        return "Player 1 won!";
    }else{
        return "Player 2 won!";
    }
}

// Best Practice 
std::string rps1(const std::string& p1, const std::string& p2)
{
    if(p1 == p2)
        return "Draw!";
    if( ( p1[0] == 's' && p2[0] == 'p' )||
        ( p1[0] == 'p' && p2[0] == 'r' )||
        ( p1[0] == 'r' && p2[0] == 's' ) )
        return "Player 1 won!";
    return "Player 2 won!";
}