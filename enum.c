#include <stdio.h>

enum Hari {SEN, SEL, RAB, KAM, JUM, SAB, MIN};

int main(){
	enum Hari today = RAB;
	
	if(today == SEN){
		printf("Hari ini hari Senin");
	}else if(today == SEL){
		printf("Hari ini hari Selasa");
	}else if(today == RAB){
		printf("Hari ini hari Rabu");
	}else if(today == KAM){
		printf("Hari ini hari Kamis");
	}else if(today == JUM){
		printf("Hari ini hari Jum'at'");
	}else if(today == SAB){
		printf("Hari ini hari Sabtu");
	}else if(today == MIN){
		printf("Hari ini hari Minggu");
	}else{
		printf("Hari yang di inputkan tidak valid");
	}
	
	return 0;
	
}
