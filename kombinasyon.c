#include <stdio.h>
double kombinasyon(int n, int r);
double faktoriyel(int n);
int main() {
	int sayi1, sayi2;
	printf("Sayi giriniz:"); scanf("%d", &sayi1);
	printf("Sayi giriniz:"); scanf("%d", &sayi2);
	printf("C(%d,%d) = %lf", sayi1, sayi2, kombinasyon(sayi1, sayi2));
	return 0;
}
double faktoriyel(int n){
	if (n == 0 || n == 1)
		return 1;
	return n * faktoriyel(n - 1);
}

double kombinasyon(int n, int r) {
	r = (n - r) < r ? n - r : r;
	int sayac = 0;
	double sonuc = 1;
	while (sayac < r){
		sonuc *= n--;
		sayac++;
	}
	return sonuc / faktoriyel(r);
}
