#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
	int hrs = 0;
	float money = 0.0;
	printf("Quanto você ganha por hora?: ");
	scanf("%f", &money);
	printf("Quantas horas você trabalha por mês?: ");
	scanf("%d", &hrs);
	printf("Seu salário mensal é de %.2f", (money*hrs));
	return 0;                     
}