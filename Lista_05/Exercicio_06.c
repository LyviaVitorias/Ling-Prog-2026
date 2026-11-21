#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Lista 05 - Exercicio 6
   Faça um programa que leia do usuário 4 vetores com 10 posições,
   correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e
   p2(x2,y2) e calcule e mostre a distância entre eles, aplicando a
   distância euclidiana, segundo a fórmula: d = √((x₂-x₁)² + (y₂-y₁)²)

   Compilar com: gcc Exercicio_06.c -o ex06 -lm */

#define tam 10

void leVetor(float vetor[], char nome[]) {
	int i;
	printf("Digite os %d valores de %s:\n", tam, nome);
	for (i = 0; i < tam; i++) {
		scanf("%f", &vetor[i]);
	}
}

float distancia(float x1, float y1, float x2, float y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(int argc, char *argv[]) {
	float x1[tam], y1[tam], x2[tam], y2[tam];
	int i;

	leVetor(x1, "x1");
	leVetor(y1, "y1");
	leVetor(x2, "x2");
	leVetor(y2, "y2");

	// a posicao i de cada vetor forma o par de pontos p1 e p2
	for (i = 0; i < tam; i++) {
		printf("p1(%.1f, %.1f) e p2(%.1f, %.1f): d = %.4f\n",
		       x1[i], y1[i], x2[i], y2[i], distancia(x1[i], y1[i], x2[i], y2[i]));
	}

	return 0;
}
