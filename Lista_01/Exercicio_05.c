#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 5
   Elabore um programa que peça ao usuário para digitar 4 valores. E mostre
   na tela a soma, a média e o produtório desses valores */

int main(int argc, char *argv[]) {
	int i;
	float valor, soma = 0, produto = 1, media;

	// a soma comeca em 0 e o produto comeca em 1 (elemento neutro)
	for (i = 1; i <= 4; i++) {
		printf("Digite o valor %d: ", i);
		scanf("%f", &valor);
		soma = soma + valor;
		produto = produto * valor;
	}

	media = soma / 4;

	printf("Soma: %.2f\n", soma);
	printf("Media: %.2f\n", media);
	printf("Produtorio: %.2f\n", produto);

	return 0;
}
