// Classifies a poker hand
/**************************************************************************************
 * TASK:                                                                              *
 * Remove the num_in_rank num_in_suit  card_exists                                    *
 * Store cards in a 5x2 array named hand where every row is a card                    *
 * column 0 is the rank, column 1 is the suit.                                        *
 **************************************************************************************
*/

#include <stdbool.h>   
#include <stdio.h>
#include <stdlib.h>

#define RANK 0
#define SUIT 1
#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2]; // The new all encompassing array.
//int num_in_rank[NUM_RANKS];
//int num_in_suit[NUM_SUITS];
bool royal_flush, straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
 // bool card_exists[NUM_RANKS][NUM_SUITS];
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card = false;
  int cards_read = 0;

  while (cards_read < NUM_CARDS)
  {
    printf("Enter a card (rank and suit, for example 2s): ");

    rank_ch = getchar();
    switch (rank_ch) 
    {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) 
    {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card)
      printf("Bad card; ignored.\n");
    for(int j = 0; j < cards_read; j++)
    {
      if(hand[j][0] == rank && hand[j][1] == suit)
      printf("That's a duplicate. Ignored.\n");
    }

      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
  int num_consec = 0;
  int rank, suit, card = 0;

    royal_flush = false;
  straight = false;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* check for flush */
  for(card = 0; card < NUM_CARDS - 1; card++)
  {
  for (suit = 0; suit < 4; suit++)
  {
    if (hand[card][suit] != hand[card + 1][suit])
      flush = false;
  }
  }

  int rank_repeat[13] ={0};
  rank = 0;
  for (card = 0; card < NUM_CARDS; card++) 
  {
  rank_repeat[hand[card][RANK]]++;
  }

  /* check for straight */
  for (rank = 0; rank < 13; rank++) 
  {
    if (rank_repeat[rank] == 1 && rank_repeat[rank + 1] == 1 &&
    rank_repeat[rank + 2] == 1 && rank_repeat[rank + 3] == 1 && rank_repeat[rank + 4] == 1)
    {
    straight = true; 

    if (rank == 8)
    royal_flush = true;
    }

  }
  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */


  for (rank = 0; rank < 13; rank++) 
  {
    if (rank_repeat[rank] == 4) four = true;
    if (rank_repeat[rank] == 3) three = true;
    if (rank_repeat[rank] == 2) pairs++;
  }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (royal_flush) printf("Royal flush");
  else if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}
