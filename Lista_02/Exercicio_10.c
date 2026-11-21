#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 10
   (URI 1013) Faça um programa que leia três valores e apresente o maior dos
   três valores lidos seguido da mensagem "eh o maior". Utilize a fórmula:
   MaiorAB = (a + b + abs(a - b)) / 2
   OBS.: A FÓRMULA APENAS CALCULA O MAIOR ENTRE OS DOIS PRIMEIROS (A E B). UM
   SEGUNDO PASSO, PORTANTO É NECESSÁRIO PARA CHEGAR NO RESULTADO ESPERADO. */

int main(int argc, char *argv[]) {
	int a, b, c, maiorAB, maior;

	printf("Digite tres valores: ");
	scanf("%d %d %d", &a, &b, &c);

	// primeiro passo: maior entre a e b
	maiorAB = (a + b + abs(a - b)) / 2;

	// segundo passo: maior entre maiorAB e c
	maior = (maiorAB + c + abs(maiorAB - c)) / 2;

	printf("%d eh o maior\n", maior);

	return 0;
}
