#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 2
   Faça um programa que leia um valor do tipo double e depois o imprima na
   forma de notação científica.
   O FORMATO PADRÃO É A × 10ⁿ, ONDE O NÚMERO A É MAIOR OU IGUAL A 1 E MENOR
   QUE 10 (1 ≤ A < 10), E O EXPOENTE N É UM NÚMERO INTEIRO. CONSIDEREM SOMENTE
   VALORES POSITIVOS. */

int main(int argc, char *argv[]) {
	double valor, a;
	int n = 0;

	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);

	if (valor <= 0) {
		printf("Digite somente valores positivos.\n");
		return 0;
	}

	a = valor;

	// enquanto A for 10 ou mais, divide por 10 e soma 1 no expoente
	while (a >= 10) {
		a = a / 10;
		n++;
	}

	// enquanto A for menor que 1, multiplica por 10 e tira 1 do expoente
	while (a < 1) {
		a = a * 10;
		n--;
	}

	printf("%lf = %.4lf x 10^%d\n", valor, a, n);

	return 0;
}
