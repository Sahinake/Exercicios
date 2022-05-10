#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float money = 0.00, imp = 0.08, sind = 0.05;
	printf("Quanto você ganha mensalmente?: ");
	scanf("%f", &money);
	printf("Seu salário mensal bruto é de: %.2f reais\n", money);
	printf("Você pagou de imposto um valor de: %.2f reais\n", money*imp);
	printf("Você pagou de sindicato um valor de: %.2f reais\n", money*sind);
	printf("Seu salário mensal líquido é de: %.2f reais\n", (money-((money*imp)+(money*sind))));
	return 0;
}