#include <stdio.h>
#include <locale.h>
int mukemmelMi(int n);
void mukemmelSayiListesi(int limit);
void menu();
void menuMukemmelSayiListesi();
void menuMukemmelSayiSorgula();
char g_secim;
int main(){
	setlocale(LC_ALL, "Turkish");
	menu();
	if (g_secim == '1')
		menuMukemmelSayiListesi();
	else if (g_secim == '2')
		menuMukemmelSayiSorgula();
}

int mukemmelMi(int n){
	if (n == 1)
		return 0;
	int limit = n/2;
	int i = 2;
	int toplam = 1;
	for (;i<=limit;i++)
		if (n % i == 0)
			toplam += i;
	return (toplam == n) ? 1 : 0;
}
void mukemmelSayiListesi(int limit){
	int i =	2;
	for (;i < limit;i++)
		if (mukemmelMi(i))
			printf("%d say�s� m�kemmel say�d�r\n", i);
}
void menu(){
	printf("M�KEMMEL SAYI\n");
	printf("1) M�kemmel Say� Listesi\n");
	printf("2) M�kemmel Say� Sorgula\n");
	printf("Se�iminiz:"); scanf("%c", &g_secim);
}
void menuMukemmelSayiListesi(){
	int limit;
	printf("S�n�r� belirleyin:"); scanf("%d", &limit);
	mukemmelSayiListesi(limit);
}
void menuMukemmelSayiSorgula(){
	int sayi;
	printf("Sayi giriniz:"); scanf("%d", &sayi);
	if (mukemmelMi(sayi))
		printf("%d say�s� m�kemmel say�d�r.", sayi);
	else
		printf("%d say�s� m�kemmel say� de�ildir.", sayi); 
}
