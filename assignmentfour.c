/*For this lab you will need to prompt the user to enter a single character.
The character the user enters must be lower case and the user should not be allowed to proceed in the program until a lowercase letter has been entered.
If the user enters anything other than a lower case letter they should be informed of their mistake and given as many chances as are needed to enter a correct letter.
When the user has entered a lowercase letter the program should then show them all of the letters that follow their selected letter in the alphabet.*/

#include <stdio.h>
/*Sorry  about the mess.
Not proud of this just for the record.
It compiles but there's the logical error in the first loop,
among other style issues..*/

int main ( void ) {
  char user_letter;
  char MIN = 'a';
  char MAX = 'z';

      printf ("Please enter a starting lower-case letter:");
          scanf ( "%c", &user_letter );

        while ( user_letter < MIN || user_letter > MAX ) {//Repeats error twice. UGH.
        printf ("That is not a lower-case letter, please try again:");
          scanf ( "%c", &user_letter );
        }

        while ( user_letter <= MAX && user_letter >= MIN )
          { printf ( "%c", user_letter);
              ++user_letter;
          }


return 0;
}
