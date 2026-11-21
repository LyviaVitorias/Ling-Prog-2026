#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 7
   (URI 1011) Faça um programa que calcule e mostre o volume de uma esfera
   sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume
   é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
   DICA: AO UTILIZAR A FÓRMULA, PROCURE USAR (4/3.0) OU (4.0/3), POIS ALGUMAS
   LINGUAGENS (DENTRE ELAS O C/C++), ASSUMEM QUE O RESULTADO DA DIVISÃO ENTRE
   DOIS INTEIROS É OUTRO INTEIRO. */

int main(int argc, char *argv[]) {
	double raio, volume, pi = 3.14159;

	printf("Digite o raio: ");
	scanf("%lf", &raio);

	volume = (4.0 / 3) * pi * raio * raio * raio;

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}
