
//convert distance traveled at speed of light into # of days input, output miles traveled.

#include <stdio.h>

long long  sol_miles_per_day = 16070400000; //sol= speed of light
int num_days = 0; //num_days: number of days; to be input by user
long long distance_traveled = 0;
int main ( void ) {
 printf( "How many days would you like to converted to miles traveled at the speed of light?:" );

 scanf ( "%d", &num_days );

  distance_traveled = num_days * sol_miles_per_day; //process occurs after input by user and enter button is pressed

 printf ( "The distance traveled per the amount of days you entered is: %lld\n", distance_traveled );

  return 0; //program ends after output sequence^
}
