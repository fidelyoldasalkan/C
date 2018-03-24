#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void menu();
int * sayilariAl();
double ortalama(int *sayiDizisi);
int g_limit;
int main(){
	setlocale(LC_ALL, "Turkish");
	menu();
	printf("%lf", ortalama(sayilariAl()));
}

void menu(){
	printf("ORTALAMA HESAPLAMA\n");
	printf("Say� limitini girinz :"); scanf("%d", &g_limit);
}

int * sayilariAl(){
	int * sayilar = malloc(g_limit * sizeof(int)); // say�lar i�in bellekten yer ay�rt�r
	int i = 0;
	for(;i<g_limit;i++){
		printf("Say� girin :"); scanf("%d", sayilar++); // s�rayla say�lar� al�r ve i�aret�iyi bir ileri ta��r
	}
	sayilar -= g_limit; //i�aret�iyi ba�lang�� konumuna ta��r
	return sayilar;
}

double ortalama(int *sayiDizisi){
	int toplam = 0;
	int i= 0;
	for (;i<g_limit;i++)
		toplam += *sayiDizisi++; // say� dizisindeki i�aret�inin g�sterdi�i de�eri al�r toplam de�i�kenine ekler sonra i�aret�iyi 1 ileri ta��r
	return toplam / g_limit;
}
