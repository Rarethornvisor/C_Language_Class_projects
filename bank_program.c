//bank_program_lab05

#include <stdio.h>
#include <string.h>

int subtract_frm_mainvar (int, char *);//withdraw
int add_to_mainvar (int, char *);//Deposit
void show_menu (char *);
int do_num_prompt ();//prompt for Menu


int main (void) {

 int choice = 0;
 int balance = 0;
   while (choice != 4) {
    show_menu ("1. Balance\n2. Deposit\n3. Withdrawal\n4. Exit\n");
    choice = do_num_prompt ();
    switch (choice) {
    case 1: printf("Your balance is: $%d\n", balance);
    break;
    case 2: balance = add_to_mainvar (balance, "How much do you wish to deposit?: ");//Deposit
    printf("New balance: $%d\n", balance );
    break;
    case 3: balance = subtract_frm_mainvar (balance, "how much do you wish to withdraw?: ");//withdraw
    printf("New balance: $%d\n", balance );
    break;
    case 4: printf ("Thank you.");//Exit
    break;
    default: printf ("Not a valid choice, please try again.\n");//handling
    }
   }
return 0;
}

int do_num_prompt () {//prompt for Menu
int number;
printf ("Please enter number: ");
scanf ("%d", &number );
return number;
}


void show_menu (char * menu_string) {
printf ("%s", menu_string);
}

int subtract_frm_mainvar (int num1, char * prompt) {//withdraw
int num2;
printf ("%s", prompt);
scanf ("%d", &num2);
while (num2 < 0){//handling.
printf ("Invalid entry.\n");
printf ("%s", prompt);
scanf ("%d", &num2);}
while ( num1 < num2){//handling
  printf("Sorry, your entry is higher than current balance.\n");
  printf ("%s", prompt);
  scanf ("%d", &num2);
}
num1 = num1 - num2;
return num1;
}

int add_to_mainvar (int num1, char * prompt) {//Deposit
int num2;
printf ("%s", prompt);
scanf ("%d", &num2);
while (num2 < 0){//handling
printf ("Invalid entry.\n");
printf ("%s", prompt);
scanf ("%d", &num2);}
num1 = num2 + num1;
return num1;}
