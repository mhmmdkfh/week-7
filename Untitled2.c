# include <stdio.h>
// enumeration constants represent months of the year
enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
int main (void) {
	enum months month;
//initialize array of pointers
const char *monthName [] = {"","January","February","March"," April"," May","June"," July","August","September","October","November","December","a","b"};
//loop through months
for ( month = JAN; month<=DEC; ++month){
printf ("%2d%11s\n", month, monthName[month]);
}
}
