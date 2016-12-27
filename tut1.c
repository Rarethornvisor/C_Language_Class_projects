//Lab07
#include <stdio.h>
#include "headerfile.h"

int main (void) {

char c;
char lcvwl1 = 'a', lcvwl2 = 'e', lcvwl3 = 'i', lcvwl4 = 'o', lcvwl5 = 'u', cvwl1 = 'A', cvwl2 = 'E', cvwl3 = 'I', cvwl4 = 'O', cvwl5 = 'U';

display_prompt ("Enter sentence:");

 while ((c = getchar ()) != '\n') {
   if ( c==lcvwl1 || c==lcvwl2 || c==lcvwl3 || c==lcvwl4 || c==lcvwl5 || c==cvwl1 || c==cvwl2 || c==cvwl3 || c==cvwl4 || c==cvwl5 || c==' ' || c==',' || c=='.' )
    putchar (c);
     else {
      putchar (c);
       printf ("ut");
     }
  }
 putchar (c);
return 0;
}//end main
/*Need to make header file (some sort of prompt or statement in process that's usable in both programs) and program that removes "ut" after consonants.
Also need to figure out way of removing it from string itself and discounting sentences using ut in sentence form [check req.s for assignment on print-out for lab07 located on desk (under computer?)]*/
