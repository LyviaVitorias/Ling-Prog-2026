#include <stdio.h>
#include <stdlib.h>

/* Lista de Revisao - Exercicio 01: Validador de CPF
   Desenvolva um programa que receba um número de CPF e informe se ele é
   Válido ou Inválido.
   Crie um campo de entrada para os números;
   Implemente a lógica de cálculo dos dois dígitos verificadores;
   Mostre o resultado final na tela.
   Algoritmo de Validação:
   1º dígito: Multiplique os 9 primeiros números por uma contagem regressiva
   de 10 a 2. Some tudo, multiplique por 10 e pegue o resto da divisão por 11.
   2º dígito: Repita o processo com os 10 primeiros números, usando pesos de
   11 a 2.
   Dica: Se o resto da conta for 10, considere o dígito como 0. */

int main(int argc, char *argv[]) {
	int cpf[11], i, soma, dig1, dig2;

	printf("Digite o CPF (somente os 11 numeros): ");
	// %1d le um digito de cada vez
	for (i = 0; i < 11; i++) {
		scanf("%1d", &cpf[i]);
	}

	// 1o digito: 9 primeiros numeros com pesos de 10 a 2
	soma = 0;
	for (i = 0; i < 9; i++) {
		soma = soma + cpf[i] * (10 - i);
	}
	dig1 = (soma * 10) % 11;
	if (dig1 == 10) dig1 = 0;

	// 2o digito: 10 primeiros numeros com pesos de 11 a 2
	soma = 0;
	for (i = 0; i < 10; i++) {
		soma = soma + cpf[i] * (11 - i);
	}
	dig2 = (soma * 10) % 11;
	if (dig2 == 10) dig2 = 0;

	// compara os digitos calculados com os digitados
	if (dig1 == cpf[9] && dig2 == cpf[10]) {
		printf("CPF Valido\n");
	} else {
		printf("CPF Invalido\n");
	}

	return 0;
}
