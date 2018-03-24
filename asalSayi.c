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
		printf("HATALI TU�LAMA YAPTINIZ");
	
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
	printf("\n1-)Asal say� listesi i�in 1");
	printf("\n2-)Asal say� sorgulamak i�in 2");
	printf("\nSe�iminiz:");
	scanf("%c", &g_secim);
}

void menuAsalSayiSorgula(){
	int sayi;
	printf("Say� giriniz:"); scanf("%d", &sayi);
	if (asalMi(sayi))
		printf("%d sayisi asal say�d�r", sayi);
	else
		printf("%d sayisi asal say� de�ildir", sayi);
}
void menuAsalSayiListele(){
	int limit;
	printf("S�n�r� belirleyin :"); scanf("%d", &limit);
	printf("%d say�s�na kadarki asal say�lar listesi\n", limit);
	asalSayilariListele(limit);
}
