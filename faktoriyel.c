#include <stdio.h>
#include <math.h>

double factorialRecursive(int number);
double factorial(int number);
int main(void){
	printf("%lf", factorialRecursive(-5));
	printf("\n");
	printf("%lf", factorial(-5)); 
}

double factorialRecursive(int number){
	int absNumber = abs(number);
	if (absNumber == 0 || absNumber == 1)
		return 1;
	double f = absNumber * factorialRecursive(absNumber - 1);
	return number < 0 ? f * -1 : f;
}

double factorial(int number){
	double f = 1;
	for (register int i = abs(number);i>1;i--)
		f *= i;
	return (number < 0) ? f * -1: f;
}
