#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x = 0, y = 0;
	printf("Digite o seu primeiro número: ");
	scanf("%d", &x);
	printf("Digite o seu segundo número: ");
	scanf("%d", &y);
	printf("A soma = %d", (x+y));
	return 0;
}