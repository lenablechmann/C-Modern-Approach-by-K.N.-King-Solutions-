// Adds 24 hour format to reminders.

/* remind.c (Chapter 13, page 294) */
/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define TIME_LEN 8 // 2 digits for hours, 1 space, 5 chars for time

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN + TIME_LEN];
  char time_str[TIME_LEN + 1], msg_str[MSG_LEN+1]; // Changed day string to pure time
  int day, hour, min, i, j, num_remind = 0; // added hours and min

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day, 24h time, and reminder: ");
    scanf("%2d", &day);
    if (day == 0)
      break;
    scanf(" %2d:%2d", &hour, &min);
    sprintf(time_str, "%2d %.2d:%.2d", day, hour, min); // %.2d aligning time
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(time_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcpy(reminders[i], time_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
