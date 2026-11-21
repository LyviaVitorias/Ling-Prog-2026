#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 4
   (URI 1009) Faça um programa que leia, o salário fixo e o valor total em
   vendas de um vendedor. Sabendo que este vendedor ganha 15% de comissão
   sobre suas vendas efetuadas, mostre o total a receber no final do mês,
   com duas casas decimais. */

int main(int argc, char *argv[]) {
	double salario, vendas, total;

	printf("Digite o salario fixo: ");
	scanf("%lf", &salario);
	printf("Digite o total em vendas: ");
	scanf("%lf", &vendas);

	// 15% de comissao = vendas * 0.15
	total = salario + vendas * 0.15;

	printf("TOTAL = R$ %.2lf\n", total);

	return 0;
}
