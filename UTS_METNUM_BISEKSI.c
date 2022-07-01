// IMPORT LIBRARY
// =====================================================
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// DEKLARASI FUNGSI
// =====================================================
void menu();
void biseksi();
void close();

float f(float x);

// VARIABEL GLOBAL
// =====================================================
int pilihan;

// MENU UTAMA
// =====================================================
void menu(){
	char kembali;
	
	do {
		menu:
			system("cls");
			printf("===============================================================================================\n");
			printf("===============================================================================================\n");
			printf("== PROGRAM METODE BISEKSI =====================================================================\n");
			printf("== ABDUL WASI' AL-AFIF ========================================================================\n");
			printf("== 20081010165 ================================================================================\n");
			printf("===============================================================================================\n");
			printf("===============================================================================================\n");
			
			printf("\n");
			
			printf("MAIN MENU:");
			printf("\n[1]. Metode Biseksi");
			printf("\n[2]. Keluar");
			printf("\n\nInput Pilihan Nomor Menu : ");
			scanf("%d", &pilihan);
			switch(pilihan){
				case 1:
					biseksi();
					printf("\n");
				break;
				case 2:
					close();
				break;
				default:printf("\nMohon Maaf Pilihan Anda Salah !");
					getche();
					goto menu;
			}
			
			printf(" Ingin kembali ke menu pilihan? (Y/T): ");
			scanf("%c", &kembali); scanf("%c", &kembali);
			
	} while(kembali == 'y' || kembali == 'Y');
	
}

// MAIN FUNCTION
// =====================================================
int main(){
	system("cls");
	menu();
	return 0;
}

// CLOSE FUNCTION
// =====================================================
void close(){
	exit(0);
}

// =====================================================
// Metode Biseksi ======================================
// =====================================================

// F(X) FUNCTION
// =====================================================
float f(float x){
	float d;
	
	d=(2*x*x*x)+(5*x*x)-6;
	
	return d;
}

// ITERASI METODE BISEKSI 
// =====================================================
void biseksi(){
	system("cls");
	printf("MENU: Metode Biseksi\n\n");
	
	// DEKLARASI VARIABEL
	float a, b, c, error, toleransi;
	int i=1;
	
	// PERSAMAAN f(x)
	printf(" f(x) = 2x^3+5x^2-6 = 0\n\n");
	
	// INPUT DATA
	printf(" Masukkan batas atas (a): ");
	scanf("%f", &a);
	printf(" Masukkan batas bawah (b): ");
	scanf("%f", &b);
	printf(" Masukkan nilai toleransi error: ");
	scanf("%f", &toleransi);
	printf(" Tidak ada akar di antara kedua batas persamaan\n");
	
	// TABEL
	printf("\n iterasi \ta \tb \tc \tf(a) \t\tf(b) \t\tf(c) \terror \n");
	
	// ITERASI
	do{
		c = (a + b) / 2;
		error = fabs(b - a);
		printf(" %d\t\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n", i , a, b, c, f(a), f(b), f(c), error);
		if(f(a) * f(b) < toleransi){
			b = c;
		}
		else{
			a = c;
		}
		
		i++;
	} while(error > toleransi);
	
	// Hasil
	printf("\n Hasil Akar dari f(x) = 2x^3+5x^2-6 : %.3f\n", c);
	
}

