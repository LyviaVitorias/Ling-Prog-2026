#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Lista 01 - Exercicio 8
   Leia os quatro valores do usuário correspondentes às coordenadas em um
   plano cartesiano, p1(x1,y1) e p2(x2,y2) e calcule e mostre a distância
   entre eles, aplicando a distância euclidiana, segundo a fórmula:
   d = √((x₂-x₁)² + (y₂-y₁)²)
   DICA: UTILIZE A FUNÇÃO SQRT(); DA BIBLIOTECA MATH.H PARA REALIZAR O
   CÁLCULO DA RAIZ QUADRADA.

   Compilar com: gcc Exercicio_08.c -o ex08 -lm */

int main(int argc, char *argv[]) {
	double x1, y1, x2, y2, d;

	printf("Digite x1 e y1: ");
	scanf("%lf %lf", &x1, &y1);
	printf("Digite x2 e y2: ");
	scanf("%lf %lf", &x2, &y2);

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("Distancia = %.4lf\n", d);

	return 0;
}
