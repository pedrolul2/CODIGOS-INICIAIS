

#include <stdio.h>

int main()
{
    int i;
    //////CASO O VALOR DA VARIAVEL SEJA O INSERIDO ELE ESCREVERÁ O QUE FOI PROGRAMADO NO PRINT///////
    printf("Insira um Numero inteiro de 1 a 5\n");
    scanf("%d",&i);
    switch(i){
        case 1:
        printf("Primeiro\n");
         break;
         case 2:
         printf("Segundo\n");
         break;
         case 3:
         printf ("Terceiro\n");
         break;
         case 4:
         printf("Quarto\n");
         break;
         case 5:
         printf("Quinto\n");
         break;
         default:
         printf("Opcao invalida, favor inserir o numero correto");
         break;
        
    }
    
    
    
  return 0;
  
}
