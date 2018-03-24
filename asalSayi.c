#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
int asalMi(int n);
void asalSayilariListele(int limit);
void menu();
void menuAsalSayiSorgula();
void menuAsalSayiListele();
char g_secim;
int main(){
	setlocale(LC_ALL, "Turkish"); 
	menu();
	
	if (g_secim == '1')
		menuAsalSayiListele();
	else if (g_secim == '2')
		menuAsalSayiSorgula();
	else
		printf("HATALI TUÞLAMA YAPTINIZ");
	
}

int asalMi(int n){
	if (n == 0 || n == 1)
		return 0;
	if (n == 2)
		return 1;
	int limit = n/2;
	for (int i = 2;i <= limit; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

void asalSayilariListele(int limit){
	for (int i= 2;i<= limit;i++)
		if (asalMi(i))
			printf("Asal sayi:%2d\n", i);	
}

void menu() {
	system("cls");
	printf("ASAL SAYI");
	printf("\n1-)Asal sayý listesi için 1");
	printf("\n2-)Asal sayý sorgulamak için 2");
	printf("\nSeçiminiz:");
	scanf("%c", &g_secim);
}

void menuAsalSayiSorgula(){
	int sayi;
	printf("Sayý giriniz:"); scanf("%d", &sayi);
	if (asalMi(sayi))
		printf("%d sayisi asal sayýdýr", sayi);
	else
		printf("%d sayisi asal sayý deðildir", sayi);
}
void menuAsalSayiListele(){
	int limit;
	printf("Sýnýrý belirleyin :"); scanf("%d", &limit);
	printf("%d sayýsýna kadarki asal sayýlar listesi\n", limit);
	asalSayilariListele(limit);
}
