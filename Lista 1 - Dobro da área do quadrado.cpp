#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	int lado = 0, area = 0;
	printf("Lado do quadrado: ");
	scanf("%d", &lado);
	area = pow(lado,2);
	printf("O dobro da área = %d", 2*area);
	return 0;                     
}