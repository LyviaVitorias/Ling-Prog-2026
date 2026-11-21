#include <stdio.h>
#include <stdlib.h>

/* Lista 03 - Exercicio 09: Emissão de Contra-cheque
   Desenvolva a lógica principal que utilize as funções criadas nos
   exercícios anteriores para processar uma folha de pagamento e imprimir o
   contra-cheque.
   Solicite o valor da hora trabalhada e a quantidade de horas no mês;
   Calcule o Salário Bruto (Horas * Valor);
   Chame a função do Exercício 4 para obter o INSS;
   Chame a função do Exercício 5 para obter o IRPF;
   Calcule o Salário Líquido;
   Imprima o resultado formatado no padrão ABNT de relatórios corporativos.

   Obs: as funcoes "do Exercicio 4 e 5" sao as dos exercicios 07 e 08. */

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

/* Funcao que calcula somente o IRPF (sem printf).
   Recebe o salario base (bruto - INSS) e retorna o imposto.
   Formula: (salario base * aliquota) - deducao */
float calculaIRPF(float base) {
	if (base <= 2259.20) {
		return 0;   // isento
	} else if (base <= 2826.65) {
		return base * 0.075 - 169.44;
	} else if (base <= 3751.05) {
		return base * 0.15 - 381.44;
	} else if (base <= 4664.68) {
		return base * 0.225 - 662.77;
	} else {
		return base * 0.275 - 896.00;
	}
}

/* Imprime um valor no formato brasileiro: 5.000,00
   Separa a parte dos reais e dos centavos usando numeros inteiros. */
void imprimeReais(float valor) {
	int centavos_total = valor * 100 + 0.5;   // arredonda para o centavo
	int reais = centavos_total / 100;
	int centavos = centavos_total % 100;

	if (reais >= 1000) {
		printf("R$ %d.%03d,%02d\n", reais / 1000, reais % 1000, centavos);
	} else {
		printf("R$   %3d,%02d\n", reais, centavos);
	}
}

int main(int argc, char *argv[]) {
	float valor_hora, horas, bruto, inss, irpf, liquido;

	printf("Digite o valor da hora trabalhada: R$ ");
	scanf("%f", &valor_hora);
	printf("Digite a quantidade de horas no mes: ");
	scanf("%f", &horas);

	bruto = horas * valor_hora;
	inss = calculaINSS(bruto);
	irpf = calculaIRPF(bruto - inss);   // a base do IRPF e o bruto menos o INSS
	liquido = bruto - inss - irpf;

	printf("\n======================================================\n");
	printf("RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
	printf("======================================================\n");
	printf("Salario Bruto (Horas x Valor):   ");
	imprimeReais(bruto);
	printf("(-) Desconto INSS:               ");
	imprimeReais(inss);
	printf("(-) Desconto IRPF:               ");
	imprimeReais(irpf);
	printf("------------------------------------------------------\n");
	printf("LIQUIDO A RECEBER:               ");
	imprimeReais(liquido);
	printf("======================================================\n");

	return 0;
}
