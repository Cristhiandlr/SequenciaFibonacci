#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void main(void){
     setlocale(LC_ALL, "Portuguese");
     int a,b,auxiliar,i,n, vet[1000];
     bool aux;
     a=0;
     b=1;

     printf("Digite um numero:");
     scanf("%d",&n);
     printf("Serie de Fibonacci:\n");
     printf("%d  ",b);
     for(i=0;i<n;i++){
        auxiliar=a+b;
        a=b;
        b=auxiliar;
        vet[i]=auxiliar;
        printf("%d ",vet[i]);

     }
     for (i=0; i<n; i++){
        if (vet[i]== n){
            aux=true;
            break;
        }else{
            aux= false;
        }
     }
     if (aux){
        printf("\nO numero pertence à sequência Fibonacci!");
     }else{
        printf("\nO numero não pertence à sequência Fibonacci!");
     }
      return 0;
}
