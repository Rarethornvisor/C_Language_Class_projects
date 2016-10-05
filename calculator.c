/* Assignment instructions:
"For this lab you will need to write a C program that will prompt for and allow the user to enter 10 integer numbers. Your program is not responsible for the user entering anything other than integers.

Once the required input has been complete your program should then calculate the total and the average of all of the numbers that were entered.

The final step is for the program to display the total and average that were calculated. The average should be displayed to 2 decimal points."*/

#include <stdio.h>

int user_num_entry, accumulating_total;
float average;

  int main ( void ) {
    printf ( "You will be entering 10 numbers.\nEnter your first number please:" );

    scanf ( "%d", &user_num_entry );

    printf ( "Enter another number please:" );

    scanf ( "%d", &accumulating_total );

      accumulating_total = accumulating_total + user_num_entry; // Where process starts of adding the entered numbers

    printf ("Enter your 3rd number please:");

    scanf ("%d", &user_num_entry);

      accumulating_total = user_num_entry + accumulating_total;// The numbered entered is added to the total prior to entry and assigned to the total again

    printf ("Enter your 4th number please:");

    scanf ("%d", &user_num_entry);

      accumulating_total = user_num_entry + accumulating_total;

    printf ("Enter your 5th number please:");

    scanf ("%d", &user_num_entry);

        accumulating_total = user_num_entry + accumulating_total;

    printf ("Enter your 6th number please:");

    scanf ("%d", &user_num_entry);

        accumulating_total = user_num_entry + accumulating_total;

    printf ("Enter your 7th number please:");

    scanf ("%d", &user_num_entry);

      accumulating_total = user_num_entry + accumulating_total;

   printf ("Enter your 8th number please:");

   scanf ("%d", &user_num_entry);

      accumulating_total = user_num_entry + accumulating_total;

   printf ("Enter your 9th number please:");

   scanf ("%d", &user_num_entry);

    accumulating_total = user_num_entry + accumulating_total;

   printf ("Enter your 10th number please:");

   scanf ("%d", &user_num_entry);\

    accumulating_total = user_num_entry + accumulating_total;

    average = (float) (accumulating_total / 10.0); //The arithmetic mean commonly known as the average calculated here of the accumulated total of total #s entered divided by total # of integers entered (10).

   printf ("your grand total is: %d\n", accumulating_total); //Output of added total of #s entered

   printf ("the average of the numbers you entered is: %.2f\n", average); //Output of average with a maximum of 2 decimal points.

    return 0;
  }
