#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 3
   Implemente um programa que leia um número n [com n positivo & n <= 64] e
   mostre na tela o seu valor em base binária (bits). */

int main(int argc, char *argv[]) {
	int n, num, i, qtd = 0;
	int bits[7];   // 64 em binario tem 7 bits (1000000)

	printf("Digite um numero n (0 a 64): ");
	scanf("%d", &n);

	if (n < 0 || n > 64) {
		printf("Numero invalido!\n");
		return 0;
	}

	/* Divisoes sucessivas por 2: o resto de cada divisao e um bit.
	   Os bits saem do ultimo para o primeiro, por isso guardamos
	   no vetor e depois imprimimos de tras para frente. */
	num = n;
	do {
		bits[qtd] = num % 2;
		num = num / 2;
		qtd++;
	} while (num > 0);

	printf("%d em binario: ", n);
	for (i = qtd - 1; i >= 0; i--) {
		printf("%d", bits[i]);
	}
	printf("\n");

	return 0;
}
