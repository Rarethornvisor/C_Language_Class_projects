//Lab07-2
#include <stdio.h>
#include "headerfile.h"

int main (void) {

char c;

display_prompt ("Enter sentence:");

 while ((c = getchar ()) != '\n') {
  if (c == 'u' || c == 't')
    printf ("");
   else
    putchar (c);

  }//Takes all 'u's and 't's out of the sentence. Not what is wanted.
 putchar (c);
return 0;
}//end main
/*Need to make header file and program that removes "ut" after consonants. Check notes from last week.*/
