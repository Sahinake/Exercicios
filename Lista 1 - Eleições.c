#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int eleit = 0, br = 0, null = 0, val = 0;
	printf("Quantidade de eleitores do município: ");
	do {
		scanf("%d", &eleit);
		if(eleit <= 0)
			printf("Digite um número válido!");
	}while (eleit <= 0);
	printf("Quantidade de votos em branco: ");
	do {
		scanf("%d", &br);
		if(br < 0)
			printf("Digite um número válido!");
	}while (br < 0);
	printf("Quantidade de votos nulos: ");
	do {
		scanf("%d", &null);
		if(null < 0)
			printf("Digite um número válido!");
	}while (null < 0);
	printf("Quantidade de votos válidos");
	do {
		scanf("%d", &val);
		if(val < 0)
			printf("Digite um número válido!");
	}while (val < 0);
	printf("O número de eleitores foi de %d \n", eleit);
	printf("O percentual de votos brancos foi de %.2f", (br/eleit));
	printf("O percentual de votos nulos foi de %.2f", (null/eleit));
	printf("O percentual de votos válidos foi de %.2f", (val/eleit));
	printf("O número de pessoas que não votaram foi de %d", eleit-(br+null+val));
	return 0;
}