#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 8
   (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de
   um determinado evento em uma fábrica, e informe-o expresso no formato
   horas:minutos:segundos. */

int main(int argc, char *argv[]) {
	int tempo, horas, minutos, segundos;

	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempo);

	horas = tempo / 3600;              // 1 hora = 3600 segundos
	minutos = (tempo % 3600) / 60;     // o que sobrou das horas, em minutos
	segundos = tempo % 60;             // o que sobrou dos minutos

	printf("%d:%d:%d\n", horas, minutos, segundos);

	return 0;
}
