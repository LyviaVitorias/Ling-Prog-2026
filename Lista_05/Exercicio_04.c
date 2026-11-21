#include <stdio.h>
#include <stdlib.h>

/* Lista 05 - Exercicio 4
   (URI 1013) Faça um programa que leia 10 valores e apresente o maior dos
   10 valores lidos seguido da mensagem "eh o maior". Utilize a fórmula:
   MaiorAB = (a + b + abs(a - b)) / 2
   OBS.: A FÓRMULA APENAS CALCULA O MAIOR ENTRE OS DOIS PRIMEIROS (A E B). UM
   SEGUNDO PASSO, PORTANTO É NECESSÁRIO PARA CHEGAR NO RESULTADO ESPERADO. */

#define tam 10

int maiorAB(int a, int b) {
	return (a + b + abs(a - b)) / 2;
}

int main(int argc, char *argv[]) {
	int valores[tam], maior, i;

	for (i = 0; i < tam; i++) {
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &valores[i]);
	}

	// o maior comeca sendo o primeiro e e comparado com cada um dos outros
	maior = valores[0];
	for (i = 1; i < tam; i++) {
		maior = maiorAB(maior, valores[i]);
	}

	printf("%d eh o maior\n", maior);

	return 0;
}
