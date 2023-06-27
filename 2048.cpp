#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
///////////// PRE-DEFINED FUNCTIONS SECTION /////////////////////////////////////////////////////
///////////// DO NOT CHANGE ANYTHING, OTHERWISE YOU MIGHT GET WRONG ANSWER VERDICT //////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Parameters and seed values for the random-number generator
*/
const int M = (1 << 16) | 1;
const int A = 75;
const int C = 74;
int Xn = 0;

/*
    Return: returns a random (pseudo-random) number
*/
int generateRandomNumber()
{
    Xn = ((A * Xn) + C) % M;
    return Xn;
}

/*
    Arguments: take in a list of (x, y) coordinates of all the empty cells
    Return: returns a value (80% : 2, 20% : 4) along with a Randomly (Pseudo) 
    selected cell out of the empty cells
    pair<int, pair<int, int>> --> <value, <x, y>>
*/

pair<int, pair<int, int>> getRandomEmptyCellAndValue(vector<pair<int, int>> &emptyCells)
{
    int mini = 0, maxi = (int)emptyCells.size() - 1;
    int pos = (generateRandomNumber() % (maxi - mini + 1)) + mini;

    sort(emptyCells.begin(), emptyCells.end());

    mini = 1, maxi = 10;
    int value = (generateRandomNumber() % (maxi - mini + 1)) + mini;

    if (value <= 8)
        return make_pair(2, emptyCells[pos]);
    
    return make_pair(4, emptyCells[pos]);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
///////////// COMPLETE FOLLOWING FUNCTIONS //////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Print the current configuration of the board
*/
void printBoard()
{

}

/*
    Arguments: takes in the direction of the move {1: left, 2: down, 3: right, 4: up}
    Return: after applying the move to the board, returns if the move was successful 
    in changing the board or not
*/
bool move(int direction)
{
}

/*
    Randomly selects a cell (using getRandomEmptyCellAndValue() function) and 
    assigns a value to it
*/
void populateRandomCell()
{

}

/*
    Return: returns the current status of the game
    {
        0: Game Over (You lose / No more possible moves left)
        1: Game Over (You win / Target Achieved)
        2: Game still in progress (Valid moves left)
    }
*/
int checkGameStatus()
{

}

/*
    Used to Initialize the Board and other values required by the game
*/
void initialize()
{

}

int main()
{
    // Read inputs here and perform actions on the board
    
    return 0;
}