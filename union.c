#include <stdio.h>

union Data{
	int i;
	float f;
	char string[50];
};

int main(){
	union Data d1;
	
	d1.i = 100;
	printf("data.i adalah : %d \n", d1.i);
	printf("data.f adalah : %.2f \n", d1.f);
	
	d1.f = 100.0;
	printf("data.i adalah : %d \n", d1.i);
	printf("data.f adalah : %.2f \n", d1.f);
	
	return 0;
}
