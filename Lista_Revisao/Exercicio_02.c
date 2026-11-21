#include <stdio.h>
#include <stdlib.h>

/* Lista de Revisao - Exercicio 02: Conversor Dinâmico
   Crie um conversor de temperatura entre Celsius (C) e Fahrenheit (F), que
   verifique qual é a grandeza de entrada e realize a conversão correta.
   Solicite uma temperatura de entrada e identifique a grandeza;
   Com uma entrada em Celsius, deve-se calcular o valor em Fahrenheit;
   Com uma entrada em Fahrenheit, deve-se calcular o valor em Celsius;
   Mostre na tela o resultado da conversão.
   Fórmulas Matemáticas:
   • De Celsius para Fahrenheit: F = (C * 9/5) + 32
   • De Fahrenheit para Celsius: C = (F - 32) * 5/9 */

int main(int argc, char *argv[]) {
	float temperatura, resultado;
	char grandeza;

	printf("Digite a temperatura: ");
	scanf("%f", &temperatura);
	printf("Digite a grandeza (C ou F): ");
	scanf(" %c", &grandeza);   // o espaco antes do %c ignora o Enter anterior

	if (grandeza == 'C' || grandeza == 'c') {
		resultado = (temperatura * 9.0 / 5.0) + 32;
		printf("%.2f C = %.2f F\n", temperatura, resultado);
	} else if (grandeza == 'F' || grandeza == 'f') {
		resultado = (temperatura - 32) * 5.0 / 9.0;
		printf("%.2f F = %.2f C\n", temperatura, resultado);
	} else {
		printf("Grandeza invalida!\n");
	}

	return 0;
}
