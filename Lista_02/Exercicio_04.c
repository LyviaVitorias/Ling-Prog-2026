#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 4
   Leia um valor que represente uma temperatura em graus Celsius e
   apresente-a convertida em graus Fahrenheit. A fórmula de conversão é:
   F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a
   temperatura em Celsius. */

int main(int argc, char *argv[]) {
	float c, f;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);

	f = c * (9.0 / 5.0) + 32.0;

	printf("%.2f C = %.2f F\n", c, f);

	return 0;
}
