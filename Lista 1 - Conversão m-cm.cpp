#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	float m = 0.0;
	printf("Distância em metros: ");
	scanf("%f", &m);
	printf("%.2f m em centímetros = %.2f", m, m*100);
	return 0;
}