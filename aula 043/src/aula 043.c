/*
 ============================================================================
 Name        : aula.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int escolha;
	printf("Digite um numero de 1 a 5:");
	fflush(stdout);
	scanf(" %d", &escolha);

	if (escolha == 1) {
		printf("Você escolheu o número 1.\n");
	} else if (escolha == 2) {
		printf("Você escolheu o número 2.\n");
	} else if (escolha == 3) {
		printf("Você escolheu o número 3.\n");
	} else if (escolha == 4) {
		printf("Você escolheu o número 4.\n");
	} else if (escolha == 5) {
		printf("Você escolheu o número 5.\n");
	} else {
		printf("Opção Inválida.\n");
	}
	//Alternativa mais enxuta
	switch (escolha) {
	case 1:
		printf("Você escolheu o número 1.\n");
		break;
	case 2:
		printf("Você escolheu o número 2.\n");
		break;
	case 3:
		printf("Você escolheu o número 3.\n");
		break;
	case 4:
		printf("Você escolheu o número 4.\n");
		break;
	case 5:
		printf("Você escolheu o número 5.\n");
	default:
		printf("Opção invalida.\n");
	}

	int x, y, result, cont;
	cont=1
		whilw (cont<= 3){
		printf("Entrem com dois numeros para serem somados; ");
		scanf("%d %d, &x, &y");
		result= x + y;
		printf("o resultado das somas é: %d\n", result);
		cont = cont
	}
	return 0;
}
