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
	printf("�EK�LLER\n");
	printf("1) Kare\n");
	printf("2) Dikd�rtgen\n");
	printf("Se�iminiz:"); scanf("%c", &g_secim);
	system("cls");
}
void menuKare(){
	Kare kare;
	printf("Karenin kenar uzunlu�unu giriniz :"); scanf("%lf", &(kare.kenar));
	printf("%lf", kare.kenar);
	printf("Karenin alan� :%lf", (kare.kenar * kare.kenar));
}

void menuDikdortgen(){
	Dikdortgen dikdortgen;
	printf("Dikd�rtgenin k�sa kenar uzunlu�unu giriniz :"); scanf("%lf",&dikdortgen.kenar1);
	printf("Dikd�rtgenin uzun kenar uzunlu�unu giriniz :"); scanf("%lf",&dikdortgen.kenar2);
	printf("Dikd�rtgenin alan� :%lf", dikdortgen.kenar1 * dikdortgen.kenar2);
}
