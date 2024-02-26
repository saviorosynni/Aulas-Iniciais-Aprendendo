/*
 ============================================================================
 Name        : PRJ_HelloWorld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {

	int idade = 26;
	const int MAX_NUM = 100;

	printf("minha variável int comum = %d\n\n", idade);
	printf("minha variável int constante = %d\n\n", MAX_NUM);
	printf("minha constante = %f\n\n", PI);

	// MAX_NUM = 99;

	return EXIT_SUCCESS;

}
