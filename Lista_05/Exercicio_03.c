#include <stdio.h>
#include <stdlib.h>

/* Lista 05 - Exercicio 3
   Implemente um programa que leia um número n [com n positivo & n <= 64] e
   mostre na tela o seu valor em base binária (bits). */

int bits[7];   // 64 em binario tem 7 bits

/* Preenche o vetor com os restos das divisoes por 2
   e retorna quantos bits foram gerados */
int converteBinario(int n) {
	int qtd = 0;
	do {
		bits[qtd] = n % 2;
		n = n / 2;
		qtd++;
	} while (n > 0);
	return qtd;
}

/* Os bits foram gerados do ultimo para o primeiro,
   entao imprimimos o vetor de tras para frente */
void imprimeBinario(int qtd) {
	int i;
	for (i = qtd - 1; i >= 0; i--) {
		printf("%d", bits[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int n, qtd;

	printf("Digite um numero n (0 a 64): ");
	scanf("%d", &n);

	if (n < 0 || n > 64) {
		printf("Numero invalido!\n");
		return 0;
	}

	qtd = converteBinario(n);
	printf("%d em binario: ", n);
	imprimeBinario(qtd);

	return 0;
}
