#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 3
   Faça um programa que leia um valor em reais e a cotação do dólar. Em
   seguida, imprima o valor correspondente em dólares. */

int main(int argc, char *argv[]) {
	float reais, cotacao, dolares;

	printf("Digite o valor em reais: ");
	scanf("%f", &reais);
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &cotacao);

	dolares = reais / cotacao;

	printf("R$ %.2f = US$ %.2f\n", reais, dolares);

	return 0;
}
