#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, res;
	char opr, ec;
	
	do {
		printf("Insira um numero: \n");
		scanf("%d", &A);
		
		printf("Insira a operacao desejada: (+,-,*,/) \n");
		scanf(" %c", &opr);
		
		if (opr != '+' && opr != '*' && opr != '/' && opr != '-'){
			printf("Operacao invalida. \n");
			continue;
		}
		
		printf("Insira um numero: \n");
		scanf("%d", &B);
		
		if (opr == '+') {
			res = A + B;
		} else if (opr == '/') {
			if (B == 0){
				printf("Erro. Divisao por zero. \n");
				continue;
			}
			res = A / B;
		} else if (opr == '-') {
			res = A - B; 
		} else if (opr == '*') {
			res = A * B;
		}
		
		printf("Seu resultado sera: %d\n", res);
	
		printf(" \n");
	
		printf("Voce quer continuar? (S/N) \n");
		scanf (" %c", &ec);
	
	} while (ec == 'S' || ec == 's');
	
	return 0;
}
