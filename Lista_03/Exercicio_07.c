#include <stdio.h>
#include <stdlib.h>

/* Lista 03 - Exercicio 07: Cálculo de INSS
   Crie uma função em C que realize exclusivamente o cálculo do INSS.
   A função deve receber o salário bruto como parâmetro;
   A função deve retornar o valor do desconto do INSS;
   Não faça a impressão de dados dentro da função.
   Tabela Simplificada INSS:
   Até R$ 1.412,00: 7,5%
   De R$ 1.412,01 até R$ 2.666,68: 9%
   De R$ 2.666,69 até R$ 4.000,03: 12%
   Acima de R$ 4.000,04: 14% (Limitado ao teto)
   Nota: Para fins didáticos, você pode aplicar o percentual diretamente
   sobre o valor total bruto da faixa, sem necessidade da parcela a deduzir. */

/* Funcao que calcula somente o desconto do INSS (sem printf).
   Recebe o salario bruto e retorna o valor do desconto. */
float calculaINSS(float bruto) {
	float teto = 7786.02;   // teto do salario de contribuicao (2024)

	if (bruto <= 1412.00) {
		return bruto * 0.075;
	} else if (bruto <= 2666.68) {
		return bruto * 0.09;
	} else if (bruto <= 4000.03) {
		return bruto * 0.12;
	} else {
		// limitado ao teto: acima dele o desconto nao aumenta
		if (bruto > teto) {
			bruto = teto;
		}
		return bruto * 0.14;
	}
}

int main(int argc, char *argv[]) {
	float bruto;

	printf("Digite o salario bruto: R$ ");
	scanf("%f", &bruto);

	printf("Desconto do INSS: R$ %.2f\n", calculaINSS(bruto));

	return 0;
}
