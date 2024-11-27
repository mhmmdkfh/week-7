#include <stdio.h>
#include <string.h>
#include <conio.h>

// Definisikan enum untuk hari kerja
enum HariKerja { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

// Definisikan union untuk data spesifik karyawan
union DetailKaryawan {
    float monthlySalary; // Untuk pekerja tetap
    int contractDuration; // Untuk pekerja kontrak (dalam bulan)
};

// Definisikan struct untuk data karyawan
typedef struct {
    char name[50];
    int age;
    char jobType[10]; // "Tetap" atau "Kontrak"
    union DetailKaryawan details; // Union untuk data spesifik
} Karyawan;

int main() {
    Karyawan emp;
    enum HariKerja today;
	
	
	start:
		printf("\n\t\t\t+------------------+\n");
		printf("\t\t\t| PROGRAM KARYAWAN 123 |");
		printf("\n\t\t\t+------------------+\n");
		
		awal:
			// Input data karyawan
		    printf("Masukkan nama karyawan: ");
		    fgets(emp.name, sizeof(emp.name), stdin);
		    emp.name[strcspn(emp.name, "\n")] = '\0'; // Hapus newline dari input
		
		    printf("Masukkan umur karyawan: ");
		    scanf("%d", &emp.age);
		
		    printf("Tipe pekerjaan (Tetap/Kontrak): ");
		    scanf("%s", emp.jobType);
		
		    // Memasukkan data spesifik berdasarkan tipe pekerjaan
		    if (strcmp(emp.jobType, "tetap") == 0) {
		        printf("Masukkan gaji bulanan: ");
		        scanf("%f", &emp.details.monthlySalary);
		    } else if (strcmp(emp.jobType, "kontrak") == 0) {
		        printf("Masukkan durasi kontrak (dalam bulan): ");
		        scanf("%d", &emp.details.contractDuration);
		    } else {
		        printf("Tipe pekerjaan tidak valid.\n");
		        getch();
				printf("\n------------------\n");
				goto start ;
		    }
		
		    // Tentukan hari kerja 
		today = MONDAY;
		
		    // Cetak data karyawan
		printf("\n--- Data Karyawan ---\n");
  		printf("Nama: %s\n", emp.name);
		printf("Umur: %d\n", emp.age);
		printf("Tipe Pekerjaan: %s\n", emp.jobType);
		
  		if (strcmp(emp.jobType, "tetap") == 0) {
    	   printf("Gaji Bulanan: %.2f\n", emp.details.monthlySalary);
		} else {
      		printf("Durasi Kontrak: %d bulan\n", emp.details.contractDuration);
		}
		
  		// Cetak hari kerja
		printf("Hari ini adalah: ");
  		switch (today) {
		  case MONDAY:    printf("Senin\n"); break;
    	  case TUESDAY:   printf("Selasa\n"); break;
       	  case WEDNESDAY: printf("Rabu\n"); break;
       	  case THURSDAY:  printf("Kamis\n"); break;
       	  case FRIDAY:    printf("Jumat\n"); break;
       	  default:        printf("Hari tidak valid\n"); break;
 	    }
		getch();
		system("cls");
	goto start ;
		
    return 0;
}
