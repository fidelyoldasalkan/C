#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define SIZE 10

void menu();
void menuSayiEkle();
void menuSayiCikar();
void menuListele();
int g_secim;
int * g_stackPointer;
int g_currentSize = 0;

int main(){
	setlocale(LC_ALL, "turkish");
	g_stackPointer = malloc(SIZE * sizeof(int));
	g_stackPointer -= SIZE;
	while(g_secim != 4){
		menu();
		switch(g_secim){
			case 1 :
				menuSayiEkle(); 
				break;
			case 2 :
				menuSayiCikar(); 
				break;
			case 3 :
				menuListele(); 
				break;
			case 4 :
				printf("G�le G�le");
				break;
		}
	/*	if (g_secim == 1)
			menuSayiEkle();
		else if (g_secim == 2)
			menuSayiCikar();
		else if (g_secim == 3)
			menuListele();*/
	}
}

void menu(){
	system("cls");
	printf("STACK\n");
	printf("1) Veri Ekle\n");
	printf("2) Veri ��kar\n");
	printf("3) Listele\n");
	printf("4) ��k��\n");
	printf("Se�iminiz :"); scanf("%d", &g_secim);
}

void menuSayiEkle(){
	if (g_currentSize == SIZE){
		printf("Stack dolu...");
		getch();
		return;
	}
	printf("Eklenecek say�y� giriniz :"); scanf("%d", g_stackPointer++);
	g_currentSize++;
}

void menuListele(){
	printf("Stack :");
	int i= 0;
	for(;i<g_currentSize;i++)
		printf("%d ",*--g_stackPointer);
	printf("\n");
	g_stackPointer += g_currentSize;
	getch();
}

void menuSayiCikar(){
	if (g_currentSize == 0){
		printf("Stack Bo�...");
		getch();
		return;
	}
	printf("��kar�lan say� :%d\n", *--g_stackPointer);
	g_currentSize--;
	getch();
}
