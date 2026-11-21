#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Lista 05 - Exercicio 5
   Faça um programa que tenha um vetor de 100 inteiros e para cada item do
   vetor verifique sua paridade e sua primalidade. */

#define tam 100

int vetor[tam];

/* Preenche o vetor com numeros aleatorios de 0 a 999 */
void preencheVetor() {
	int i;
	for (i = 0; i < tam; i++) {
		vetor[i] = rand() % 1000;
	}
}

/* Retorna 1 se for par e 0 se for impar */
int ehPar(int num) {
	if (num % 2 == 0) return 1;
	return 0;
}

/* Retorna 1 se for primo e 0 se nao for.
   Primo: maior que 1 e so divisivel por 1 e por ele mesmo. */
int ehPrimo(int num) {
	int i;
	if (num < 2) return 0;
	for (i = 2; i < num; i++) {
		if (num % i == 0) return 0;   // achou um divisor, nao e primo
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int i;

	srand(time(NULL));
	preencheVetor();

	for (i = 0; i < tam; i++) {
		printf("vetor[%d] = %d -> ", i, vetor[i]);

		if (ehPar(vetor[i])) printf("par, ");
		else printf("impar, ");

		if (ehPrimo(vetor[i])) printf("primo\n");
		else printf("nao primo\n");
	}

	return 0;
}
