#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	9) Faça um programa que leia dois valores do tipo float. Use um único comando de 
	leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles 
	foram lidos.  
*/

int main(){
	
    setlocale(LC_ALL,"");//Permite caracteres especiais
    float n1,n2;

    printf("Escreva dois valores: ");
    scanf("%f %f",&n1,&n2);

    printf("Os numeros estão em ordem trocada %.1f e %.1f\n",n2,n1);
    
    return 0;
}
