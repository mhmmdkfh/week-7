#include <stdio.h>
#include <stdlib.h>

union number {
	int x;
	double y;
};

int main () {
	union number value;// define union variable
	value.x = 100 ;// put an integer into the union
	
	printf ("Put 100 in the integer member and print both members.");
	printf ("\n int: %d", value.x);
	printf ("\n double: %f", value.y);
	
	
	value.y = 100.0 ;// put a double into the same union
	printf ("\n Put 100 in the integer member and print both members.");
	printf ("\n int: %d", value.x);
	printf ("\n double: %f", value.y);
	return 0;
}
