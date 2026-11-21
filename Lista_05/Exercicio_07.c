#include <stdio.h>
#include <stdlib.h>

/* Lista 05 - Exercicio 7
   Faça um programa que receba um vetor de 100 números inteiros do teclado,
   verifique se em algum dos números presentes no vetor estão em ordem
   consecutiva, e mostre os valores que estão em ordem consecutiva. */

#define tam 100

int vetor[tam];

void leVetor() {
	int i;
	for (i = 0; i < tam; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
}

/* Dois numeros estao em ordem consecutiva quando o proximo
   e igual ao atual + 1 (ex: 7 e 8). Retorna quantos pares achou. */
int mostraConsecutivos() {
	int i, qtd = 0;
	for (i = 0; i < tam - 1; i++) {
		if (vetor[i + 1] == vetor[i] + 1) {
			printf("%d e %d (posicoes %d e %d)\n", vetor[i], vetor[i + 1], i, i + 1);
			qtd++;
		}
	}
	return qtd;
}

int main(int argc, char *argv[]) {
	leVetor();

	printf("\nValores em ordem consecutiva:\n");
	if (mostraConsecutivos() == 0) {
		printf("Nenhum valor em ordem consecutiva.\n");
	}

	return 0;
}
