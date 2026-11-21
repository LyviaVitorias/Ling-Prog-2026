#include <stdio.h>
#include <stdlib.h>

/* Lista 05 - Exercicio 2
   Faça um programa que leia um valor do tipo double e depois o imprima na
   forma de notação científica.
   O FORMATO PADRÃO É A × 10ⁿ, ONDE O NÚMERO A É MAIOR OU IGUAL A 1 E MENOR
   QUE 10 (1 ≤ A < 10), E O EXPOENTE N É UM NÚMERO INTEIRO. CONSIDEREM SOMENTE
   VALORES POSITIVOS. */

/* Calcula o expoente: conta quantas vezes a virgula precisa andar
   para o numero ficar entre 1 e 10 */
int calculaExpoente(double valor) {
	int n = 0;
	while (valor >= 10) {
		valor = valor / 10;
		n++;
	}
	while (valor < 1) {
		valor = valor * 10;
		n--;
	}
	return n;
}

/* Calcula A dividindo (ou multiplicando) o valor por 10 n vezes */
double calculaMantissa(double valor, int n) {
	int i;
	if (n > 0) {
		for (i = 0; i < n; i++) valor = valor / 10;
	} else {
		for (i = 0; i > n; i--) valor = valor * 10;
	}
	return valor;
}

int main(int argc, char *argv[]) {
	double valor;
	int n;

	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);

	if (valor <= 0) {
		printf("Digite somente valores positivos.\n");
		return 0;
	}

	n = calculaExpoente(valor);
	printf("%lf = %.4lf x 10^%d\n", valor, calculaMantissa(valor, n), n);

	return 0;
}
