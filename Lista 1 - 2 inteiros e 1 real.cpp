#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x = 0, y = 0;
	float z = 0.0;
	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &x);
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &y);
	printf("Digite um número real qualquer: ");
	scanf("%f", &z);
	printf("O produto do dobro do primeiro com a metade do segundo é de: %.2f \n", (2*x)*(y/2));
	printf("A soma do triplo do primeiro com o terceiro é de: %.2f \n", (3*x)+z);
	printf("O terceiro elevado ao cubo é: %.2f \n", pow(z,3));
	return 0;
}