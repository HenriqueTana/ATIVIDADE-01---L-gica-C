#include <stdio.h>
#include <locale.h>

//Faça algoritmo que receba dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos. 
int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int numero_1, numero_2, soma, subtracao, multiplicacao, divisao;
	printf("\n Escreva o numero 1: ",numero_1);
	scanf("%d",&numero_1);
	printf("\n Escreva o numero 2: ",numero_2);
	scanf("%d",&numero_2);

	soma = numero_1 + numero_2; 
	subtracao = numero_1 - numero_2;
	multiplicacao = numero_1 * numero_2;
	divisao = numero_1 / numero_2;
	
	printf(" A soma e : %d ", soma );	
	printf(" A subtração e : %d ", subtracao );	
	printf(" A multiplicação e : %d ", multiplicacao );	
	printf(" A divisão e : %d ", divisao );	
}
