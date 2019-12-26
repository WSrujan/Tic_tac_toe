#include <stdio.h>

/*
(0,0) (0,1) (0,2)
(1,0) (1,1) (1,2)
(2,0) (2,1) (2,2)
*/


// function to print
// void print
void print_game(char tic[3][3])
{
    printf("_______\n");
    printf("|%c|%c|%c|\n", tic[0][0], tic[0][1], tic[0][2]);
    printf("_______\n");
    printf("|%c|%c|%c|\n", tic[1][0], tic[1][1], tic[1][2]);
    printf("_______\n");
    printf("|%c|%c|%c|\n", tic[2][0], tic[2][1], tic[2][2]);
    printf("_______\n");

}
// function to check if game finished

// handle input fucntion 

int main()
{
    int i,j;
    char tic[3][3], o = 'O', cross = 'X';
    // initialize all elements in matrix to ' '
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            tic[i][j] = ' ';
        }
    }
    print_game(tic);
    // while loop until game finished
        // print current state
        // ask player 1 for choice
        // check if game finished, break if finished
        // print current state
        // ask player 2 for choice

    // print winner or tie
    return 0;

//}
//int game_check()
//{
    if(tic[0][0] == 'X' && tic[0][1] == 'X' && tic[0][2] == 'X')
    {
        return 1;
    }
    else if(tic[0][0] == 'O' && tic[0][1] == 'O' && tic[0][2] == 'O')
    {
        return 2;
    }

    else if(tic[1][0] == 'X' && tic[1][1] == 'X' && tic[1][2] == 'X')
    {
        return 1;
    }
    else if(tic[1][0] == 'O' && tic[1][1] == 'O' && tic[1][2] == 'O')
    {
        return 2;
    }
    else if(tic[2][0] == 'X' && tic[2][1] == 'X' && tic[2][2] == 'X')
    {
        return 1;
    }
    else if(tic[2][0] == 'O' && tic[2][1] == 'O' && tic[2][2] == 'O')
    {
        return 2;
    }
    else if(tic[0][0] == 'X' && tic[1][0] == 'X' && tic[2][0] == 'X')
    {
        return 1;
    }
    else if(tic[0][0] == 'O' && tic[1][0] == 'O' && tic[2][0] == 'O')
    {
        return 2;
    }
    else if(tic[0][1] == 'X' && tic[1][1] == 'X' && tic[2][1] == 'X')
    {
        return 1;
    }
    else if(tic[0][1] == 'O' && tic[1][1] == 'O' && tic[2][1] == 'O')
    {
        return 2;
    }
    else if(tic[0][2] == 'X' && tic[1][2] == 'X' && tic[2][2] == 'X')
    {
        return 1;
    }
    else if(tic[0][2] == 'O' && tic[1][2] == 'O' && tic[2][2] == 'O')
    {
        return 2;
    }
    else if(tic[0][0] == 'X' && tic[1][1] == 'X' && tic[2][2] == 'X')
    {
        return 1;
    }
    else if(tic[0][0] == 'O' && tic[1][1] == 'O' && tic[2][2] == 'O')
    {
        return 2;
    }
    else if(tic[0][2] == 'X' && tic[1][1] == 'X' && tic[2][0] == 'X')
    {
        return 1;
    }
    else if(tic[0][2] == 'O' && tic[1][1] == 'O' && tic[2][0] == 'O')
    {
        return 2;
    }

}