/**
 * Card shuffling and dealing
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);

int main(void)
{
    unsigned int deck[SUITS][FACES] = {0}; //initialize all to zero
    srand(time(NULL));                     //seed random generator with current time
    shuffle(deck);                         //mix the deck

    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine", "Ten", "Jack", "Queen", "King"};
    deal(deck, face, suit);
}
/**
 * Shuffles the deck of cards
 */
void shuffle(unsigned int wDeck[][FACES])
{
    // For each card, select a random slot in the dock
    for (size_t card = 1; card < CARDS; card++)
    {
        size_t row;
        size_t column;
        // Loop until you get unoccupied position
        do
        {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck[row][column] != 0);
        // Assign the current card to the selected empty deck slot
        wDeck[row][column] = card;
    }
}
/**
 * Deal cards in a deck
 */
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
    // Deal each of the cards
    for (size_t card = 1; card < CARDS; card++)
    {
        // Loop through the rows of the deck - wDeck
        for (size_t row = 0; row < SUITS; row++)
        {
            // For the current row, loop through the columns of the row
            for (size_t column = 0; column < FACES; column++)
            {

                if (wDeck[row][column] == card)
                {
                    printf("%5s of %-8s", wFace[column], wSuit[row]);
                    printf("%c", card % 2 == 0 ? '\n' : '\t'); //2-column format
                }
            }
        }
    }
}