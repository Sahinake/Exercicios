#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float av1 = 0.0, av2 = 0.0, av3 = 0.0;
	printf("Digite a primeira nota: ");
	scanf("%f", &av1);
	printf("Digite a segunda nota: ");
	scanf("%f", &av2);
	printf("Digite a terceira nota: ");
	scanf("%f", &av3);
	printf("Sua média final é %.2f", ((av1+av2+av3)/3));
	return 0;
}