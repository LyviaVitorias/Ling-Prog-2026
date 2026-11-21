#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Lista 03 - Exercicio 06: Operação ENIAC - Trajetória
   Simule o alcance horizontal de um projétil com resistência do ar.
   Entradas: Velocidade Inicial (v0) e Ângulo (θ).
   Saída: Alcance Máximo e Tempo de Voo.
   Constantes: Gravidade g = 9.8 e atrito k = 0.5.
   • Converta o ângulo para radianos: rad = graus * (PI / 180).
   • Use um Loop de Tempo que incremente 0.01s e pare quando a altura
     y(t) ≤ 0.

   Compilar com: gcc Exercicio_06.c -o ex06 -lm */

#define PI 3.14159

int main(int argc, char *argv[]) {
	float g = 9.8, k = 0.5, dt = 0.01;
	float v0, graus, rad, vx, vy, x = 0, y = 0, t = 0;

	printf("Digite a velocidade inicial (m/s): ");
	scanf("%f", &v0);
	printf("Digite o angulo (graus): ");
	scanf("%f", &graus);

	rad = graus * (PI / 180);

	// separa a velocidade em horizontal (x) e vertical (y)
	vx = v0 * cos(rad);
	vy = v0 * sin(rad);

	/* Loop de tempo: a cada 0.01s a velocidade perde um pouco por causa
	   do atrito (k) e a vertical tambem perde pela gravidade (g).
	   Depois a posicao anda conforme a velocidade. */
	do {
		vx = vx - k * vx * dt;
		vy = vy - (g + k * vy) * dt;
		x = x + vx * dt;
		y = y + vy * dt;
		t = t + dt;
	} while (y > 0);

	printf("Alcance maximo: %.2f m\n", x);
	printf("Tempo de voo: %.2f s\n", t);

	return 0;
}
