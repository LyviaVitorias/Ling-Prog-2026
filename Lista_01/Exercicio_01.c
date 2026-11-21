#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 1
   Faça um programa que leia dois números inteiros e depois os imprima na
   ordem inversa em que eles foram lidos */

int main(int argc, char *argv[]) {
	int a, b;

	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);

	// para inverter, basta imprimir o segundo antes do primeiro
	printf("Ordem inversa: %d %d\n", b, a);

	return 0;
}
