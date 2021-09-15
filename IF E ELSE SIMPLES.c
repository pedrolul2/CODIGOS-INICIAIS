

#include <stdio.h>

int main()
{
    int age;
    printf("insira sua idade \n");
    scanf("%d",&age);
    
    if (age <= 5)
    printf("Bebê\n");
   
   else if (age >= 5 && age <=10)
    printf("Criança\n");
    else if (age>10 && age<=18)
    printf("Adolecente\n");
    else if (age>=26 && age<=60)
    printf("Adulto\n");
    else if (age>=60)
    printf("idoso\n");
    
  return 0;
  
}
