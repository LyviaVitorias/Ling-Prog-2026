#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 5
   Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula
   de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos
   e p = 3.141592. */

int main(int argc, char *argv[]) {
	float g, r, p = 3.141592;

	printf("Digite o angulo em graus: ");
	scanf("%f", &g);

	r = g * p / 180;

	printf("%.2f graus = %.4f radianos\n", g, r);

	return 0;
}
