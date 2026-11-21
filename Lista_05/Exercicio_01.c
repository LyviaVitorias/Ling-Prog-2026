#include <stdio.h>
#include <stdlib.h>

/* Lista 05 - Exercicio 1
   Faça um programa que leia 100 números inteiros e depois os imprima na
   ordem inversa em que eles foram lidos, e ordenados do maior para o menor. */

#define tam 100

int numeros[tam];   // vetor global, como no Campo Minado

void leNumeros() {
	int i;
	for (i = 0; i < tam; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
}

void imprimeInverso() {
	int i;
	printf("\nOrdem inversa:\n");
	for (i = tam - 1; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
}

/* Ordena do maior para o menor (Bubble Sort):
   compara cada numero com o vizinho e troca se o vizinho for maior. */
void ordenaDecrescente() {
	int i, j, aux;
	for (i = 0; i < tam - 1; i++) {
		for (j = 0; j < tam - 1 - i; j++) {
			if (numeros[j] < numeros[j + 1]) {
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}
}

void imprimeVetor() {
	int i;
	printf("\nDo maior para o menor:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	leNumeros();
	imprimeInverso();
	ordenaDecrescente();
	imprimeVetor();
	return 0;
}
