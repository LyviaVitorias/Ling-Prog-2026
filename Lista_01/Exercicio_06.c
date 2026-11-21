#include <stdio.h>
#include <stdlib.h>

/* Lista 01 - Exercicio 6
   (URI 1020) Leia um valor inteiro correspondente à idade de uma pessoa em
   dias e informe-a em anos, meses e dias
   OBS.: APENAS PARA FACILITAR O CÁLCULO, CONSIDERE TODO ANO COM 365 DIAS E
   TODO MÊS COM 30 DIAS. NOS CASOS DE TESTE NUNCA HAVERÁ UMA SITUAÇÃO QUE
   PERMITE 12 MESES E ALGUNS DIAS, COMO 360, 363 OU 364. ESTE É APENAS UM
   EXERCÍCIO COM OBJETIVO DE TESTAR RACIOCÍNIO MATEMÁTICO SIMPLES. */

int main(int argc, char *argv[]) {
	int idade, anos, meses, dias;

	printf("Digite a idade em dias: ");
	scanf("%d", &idade);

	anos = idade / 365;            // divisao inteira: anos completos
	meses = (idade % 365) / 30;    // o resto dos anos dividido em meses
	dias = (idade % 365) % 30;     // o que sobrou sao os dias

	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);

	return 0;
}
