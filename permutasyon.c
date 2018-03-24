#include <stdio.h>
double permutasyon(int n, int r);

int main(){
	printf("%lf", permutasyon(8, 7));
	return 0;
}

double permutasyon(int n, int r){
	double sonuc = 1;
	int sayac = 0;
	while (sayac < r){
		sonuc *= n--;
		sayac++;
	}	
	return sonuc;
}
