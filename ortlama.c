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
	printf("Sayý limitini girinz :"); scanf("%d", &g_limit);
}

int * sayilariAl(){
	int * sayilar = malloc(g_limit * sizeof(int)); // sayýlar için bellekten yer ayýrtýr
	int i = 0;
	for(;i<g_limit;i++){
		printf("Sayý girin :"); scanf("%d", sayilar++); // sýrayla sayýlarý alýr ve iþaretçiyi bir ileri taþýr
	}
	sayilar -= g_limit; //iþaretçiyi baþlangýç konumuna taþýr
	return sayilar;
}

double ortalama(int *sayiDizisi){
	int toplam = 0;
	int i= 0;
	for (;i<g_limit;i++)
		toplam += *sayiDizisi++; // sayý dizisindeki iþaretçinin gösterdiði deðeri alýr toplam deðiþkenine ekler sonra iþaretçiyi 1 ileri taþýr
	return toplam / g_limit;
}
