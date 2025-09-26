#include <stdio.h>


int main() 
{
    
char nome[50];
int idade;

    printf("boas vindas\n");
    
    printf(" Qual e seu nome:\n ");
    scanf("%d", nome);
    
    printf(" Qual e sua idade:\n ");
    scanf("%s", &idade);
    
    printf("olá seu nome é %d", "sua idade é %s", nome, idade);
    
    return 0;
}
