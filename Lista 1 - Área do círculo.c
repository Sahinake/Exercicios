#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	float r = 0.0;
	printf("O raio da circunferência: ");
	scanf("%f", &r);
	printf("A área da circunferência = %.2f", (pow(r,2)*3.14159265358979323846));
	return 0;
}