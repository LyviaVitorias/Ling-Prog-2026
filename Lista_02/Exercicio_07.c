#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 7
   A importância de R$780.000,00 será dividida entre três ganhadores de um
   concurso, sendo que:
   |O primeiro receberá 46% do total | O segundo receberá 32% do total. |
   O terceiro receberá o restante.|
   Calcule e imprima a quantia recebida por cada um dos ganhadores. */

int main(int argc, char *argv[]) {
	float total = 780000.00, primeiro, segundo, terceiro;

	primeiro = total * 0.46;
	segundo = total * 0.32;
	terceiro = total - primeiro - segundo;   // o restante

	printf("Primeiro ganhador: R$ %.2f\n", primeiro);
	printf("Segundo ganhador: R$ %.2f\n", segundo);
	printf("Terceiro ganhador: R$ %.2f\n", terceiro);

	return 0;
}
