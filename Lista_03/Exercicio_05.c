#include <stdio.h>
#include <stdlib.h>

/* Lista 03 - Exercicio 05: Terminal Infinity Cash
   Crie um simulador de saque que calcule a menor quantidade possível de
   notas para um valor total.
   Notas: R$ 100, R$ 50, R$ 10, R$ 5, R$ 2 e R$ 1.
   Exiba o resumo da contagem de cada nota entregue.
   Técnica Matemática: Utilize a divisão inteira para contar as notas e o
   operador módulo (%) para calcular o resto que passa para a nota seguinte.
   Exemplo: R$ 168 = 1x100, 1x50, 1x10, 1x5, 1x2, 1x1. */

int main(int argc, char *argv[]) {
	int notas[6] = {100, 50, 10, 5, 2, 1};
	int valor, quantidade, i;

	printf("Digite o valor do saque: R$ ");
	scanf("%d", &valor);

	if (valor <= 0) {
		printf("Valor invalido!\n");
		return 0;
	}

	printf("Resumo das notas:\n");

	// comeca pela maior nota e vai descendo
	for (i = 0; i < 6; i++) {
		quantidade = valor / notas[i];   // quantas notas desse valor cabem
		valor = valor % notas[i];        // o resto passa para a proxima nota
		printf("%dx R$ %d\n", quantidade, notas[i]);
	}

	return 0;
}
