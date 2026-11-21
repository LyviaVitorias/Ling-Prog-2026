#include <stdio.h>
#include <stdlib.h>

/* Lista 02 - Exercicio 1
   Faça um programa que calcule o ano de nascimento de uma pessoa a partir
   de sua idade e do ano atual. */

int main(int argc, char *argv[]) {
	int idade, ano_atual, ano_nascimento;

	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);

	ano_nascimento = ano_atual - idade;

	printf("Ano de nascimento: %d\n", ano_nascimento);

	return 0;
}
