#include <stdio.h>

struct Person{
	char Name[100];
	int age;
	float gaji;
};

typedef struct{
	char Name [100];
	char Hobby [100];
} Hobby;

int main(){
	struct Person p1 = {"Kipai", 25, 50000.5};
	struct Person p2 = {"Raihan", 18, 49990.5};
	
	Hobby h1 = {"Kipai", "Badminton"};
	Hobby h2 = {"Raihan", "Fursal"};
	
	printf("Data Pertama \n");
	printf("Nama : %s\n", p1.Name);
	printf("Umur : %d\n", p1.age);
	printf("Gaji : %.2f\n", p1.gaji);
	printf("Hobby : %s\n", h1.Hobby);
	
	printf("\nData Kedua \n");
	printf("Nama : %s\n", p2.Name);
	printf("Umur : %d\n", p2.age);
	printf("Gaji : %.2f\n", p2.gaji);
	printf("Hobby : %s\n", h2.Hobby);
	
	return 0;
}
