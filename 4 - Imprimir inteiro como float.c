#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	4) Fa�a um programa que leia um n�mero inteiro e depois o imprima usando o operador ?%f?. Veja o que aconteceu.
*/

int main(){
    
    setlocale(LC_ALL,"");//Permite caracteres especiais
    int n;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%i",&n);

    printf("%f\n",n);

    return 0;
}
