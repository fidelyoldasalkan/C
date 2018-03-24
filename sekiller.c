#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void menu();
void menuKare();
void menuDikdortgen();

typedef struct kare{
	double kenar;
}Kare;

typedef struct Dikdortgen{
	double kenar1;
	double kenar2;
}Dikdortgen;

char g_secim;

int main(){
	setlocale(LC_ALL, "Turkish");
	menu();
	
	if (g_secim == '1')
		menuKare();
	else if(g_secim == '2')
		menuDikdortgen();
}

void menu(){
	printf("ÞEKÝLLER\n");
	printf("1) Kare\n");
	printf("2) Dikdörtgen\n");
	printf("Seçiminiz:"); scanf("%c", &g_secim);
	system("cls");
}
void menuKare(){
	Kare kare;
	printf("Karenin kenar uzunluðunu giriniz :"); scanf("%lf", &(kare.kenar));
	printf("%lf", kare.kenar);
	printf("Karenin alaný :%lf", (kare.kenar * kare.kenar));
}

void menuDikdortgen(){
	Dikdortgen dikdortgen;
	printf("Dikdörtgenin kýsa kenar uzunluðunu giriniz :"); scanf("%lf",&dikdortgen.kenar1);
	printf("Dikdörtgenin uzun kenar uzunluðunu giriniz :"); scanf("%lf",&dikdortgen.kenar2);
	printf("Dikdörtgenin alaný :%lf", dikdortgen.kenar1 * dikdortgen.kenar2);
}
