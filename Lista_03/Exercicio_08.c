#include <stdio.h>
#include <stdlib.h>

/* Lista 03 - Exercicio 08: Cálculo de IRPF
   Crie uma função em C que realize exclusivamente o cálculo do IRPF.
   A função deve receber o salário-base (Bruto - INSS) como parâmetro;
   A função deve retornar o valor do imposto retido;
   Assim como no INSS, retorne apenas o valor, sem printf na função.
   Tabela Simplificada IRPF:
   Até R$ 2.259,20: Isento
   De R$ 2.259,21 até R$ 2.826,65: 7,5% (Dedução: R$ 169,44)
   De R$ 2.826,66 até R$ 3.751,05: 15% (Dedução: R$ 381,44)
   De R$ 3.751,06 até R$ 4.664,68: 22,5% (Dedução: R$ 662,77)
   Acima de R$ 4.664,68: 27,5% (Dedução: R$ 896,00)
   Fórmula: (Salário Base * Alíquota) - Dedução */

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

int main(int argc, char *argv[]) {
	float base;

	printf("Digite o salario base (bruto - INSS): R$ ");
	scanf("%f", &base);

	printf("IRPF retido: R$ %.2f\n", calculaIRPF(base));

	return 0;
}
