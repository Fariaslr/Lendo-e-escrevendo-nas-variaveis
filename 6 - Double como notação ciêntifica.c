#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	6) Fa�a um programa que leia um valor do tipo double e depois o imprima na forma 
	de nota��o cient�fica. 
*/

int main(){
   
    setlocale(LC_ALL,"");//Permite caracteres especiais
    double n;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&n);

    printf("\nValor lido: %E\n",n);
    
    return 0;
}
