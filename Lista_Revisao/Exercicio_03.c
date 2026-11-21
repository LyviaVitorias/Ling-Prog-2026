#include <stdio.h>
#include <stdlib.h>

/* Lista de Revisao - Exercicio 03: Média Escolar
   Construa um programa que receba o nome de um aluno e três notas,
   calculando a média e a situação final.
   Solicite 3 notas de entrada;
   Calcule a média e verifique o critério de aprovação;
   Mostre o resultado final formatado.
   Critérios de Avaliação:
   Aprovado: Média entre 7.0 e 10.0 (Exibir mensagem azul);
   Exame: Média entre 4.0 e 6.9 (Exibir mensagem verde + cálculo de quanto
   falta para atingir 10);
   Reprovado: Média abaixo de 4.0 (Exibir mensagem vermelha). */

int main(int argc, char *argv[]) {
	char nome[50];
	float n1, n2, n3, media;

	printf("Digite o nome do aluno: ");
	scanf("%s", nome);
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	media = (n1 + n2 + n3) / 3;

	printf("\nAluno: %s\n", nome);
	printf("Media: %.1f\n", media);

	/* As cores sao codigos do terminal:
	   \033[34m = azul, \033[32m = verde, \033[31m = vermelho, \033[0m = volta ao normal */
	if (media >= 7.0) {
		printf("\033[34mAPROVADO\033[0m\n");
	} else if (media >= 4.0) {
		printf("\033[32mEXAME\033[0m\n");
		printf("Falta %.1f para atingir 10\n", 10 - media);
	} else {
		printf("\033[31mREPROVADO\033[0m\n");
	}

	return 0;
}
