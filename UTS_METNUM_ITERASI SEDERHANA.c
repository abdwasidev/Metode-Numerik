// IMPORT LIBRARY
// =====================================================
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// DEKLARASI FUNGSI
// =====================================================
void menu();
void iterasi_sederhana();
void close();

double f(double x);
double g(double x);

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
			printf("== PROGRAM METODE ITERASI SEDERHANA ===========================================================\n");
			printf("== ABDUL WASI' AL-AFIF ========================================================================\n");
			printf("== 20081010165 ================================================================================\n");
			printf("===============================================================================================\n");
			printf("===============================================================================================\n");
			
			printf("\n");
			
			printf("MAIN MENU:");
			printf("\n[1]. Metode Iterasi Sederhana");
			printf("\n[2]. Keluar");
			printf("\n\nInput Pilihan Nomor Menu : ");
			scanf("%d", &pilihan);
			switch(pilihan){
				case 1:
					iterasi_sederhana();
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
// Metode Iterasi Sederhana ============================
// =====================================================

// F(X) FUNCTION
// =====================================================
double f(double x){
    return (2*x*x*x)+(5*x*x)-6;
}

// G(X) FUNCTION
// =====================================================
double g(double x){
    return sqrt((10*x)/6);
}

void iterasi_sederhana(){
	system("cls");
	printf("MENU: Metode Iterasi Sederhana\n\n");
	
	// DEKLARASI VARIABEL
	float awal,e;
    double x,y;
    int iterasi, n;
	int i = 0;
	
	// Persamaan
	printf(" f(x) = 2x^3+5x^2-6 = 0\n\n");
	
	// INPUT DATA
    printf(" Masukkan tebakan awal : ");
    scanf("%f",&awal);
    printf(" Masukkan toleransi error : ");
    scanf("%f",&e);
    printf(" Masukkan iterasi maksimum : ");
    scanf("%d",&n);
    
    
    // TABEL
    printf("\n iterasi\tx\t\tf(x)\n");
    x=awal;
    y=f(x);
    
	iterasi=0;

    while((fabs(y) >= e) && (iterasi <= n)){
        iterasi++;
        i++;
        x=g(x);
        y=f(x);
        
        printf(" %d\t\t%lf\t%lf\n",i, x, f(x));
    }
    printf("\n Hasil akar dari f(x) = 2x^3+5x^2-6 : x[%lf]  f(x)[%lf]\n", x, f(x));
}



