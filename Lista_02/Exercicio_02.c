#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 2
   Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida
   em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
   velocidade em km/h e M em m/s.

   Obs: 1 km/h = 1000 m / 3600 s, por isso o divisor correto e 3.6 */

int main(int argc, char *argv[]) {
	float k, m;

	printf("Digite a velocidade em km/h: ");
	scanf("%f", &k);

	m = k / 3.6;

	printf("%.2f km/h = %.2f m/s\n", k, m);

	return 0;
}
