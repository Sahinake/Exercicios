#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float alt = 0.00;
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	printf("Seu peso ideal é de: %.2f kg", ((72.7*alt)-58));
	return 0;
}