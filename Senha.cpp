#include <stdio.h>


int main() 
{
    int senha = 0;
    printf("digite uma senha: \n");
    scanf("%d", &senha);
    int tentativa;

    for(int a = 0; a < 10; a++){
       for(int b= 0; b < 10; b++){
          for(int c = 0; c < 10; c++){
             for(int d = 0; d < 10; d++){
                 printf("valor: %d %d %d %d \n", a,b,c,d);
                 tentativa = a*1000 + b*100 + c*10 + d;
                 if (senha == tentativa){
                     printf("sua senha é: %d%d%d%d \n", a,b,c,d);
                     return 0;
                 }
                 else{
                     printf("tentativa; %d %d %d %d \n", a,b,c,d);
                 }
                 
            
                 }
               }
           } 
        }
     }
