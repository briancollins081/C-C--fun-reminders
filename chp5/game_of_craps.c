/**
 * A player rolls two dice. Each die has six faces. 
 * These faces contain 1, 2, 3, 4, 5, and 6 spots. 
 * After the dice have come to rest, the sum of the spots on the two upward faces is calculated. 
 * If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the 
 * first throw (called “craps”), the player loses (i.e., the “house” wins). 
 * If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player’s “point.”
 * To win, you must continue rolling the dice until you “make your point.” 
 * The player loses by rolling a 7 before making the point.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// game status
enum Status
{
    CONTINUE,
    WON,
    LOST
};

// prototype
int rollDice(void);

int main(void)
{
    // randomize number generator using current time
    srand(time(NULL));
    int myPoint = 0;
    enum Status gameStatus; //can contain CONTINUE, WON, LOST
    int sum = rollDice();
    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else if (7 == sum)
        {
            gameStatus = LOST;
        }
    }

    if (WON == gameStatus)
    {
        puts("Player wins");
    }
    else
    {
        puts("Player loses");
    }
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}