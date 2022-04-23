#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",name);

    printf("Qual seu sobrenome?\n");
    scanf("%s",sobrenome);

    printf("\nShow de bola %s %s...Qual sua idade?\n",name,sobrenome);
    scanf("%d",&idade);

    printf("\nMuito bom! O %s %s tem %d anos!",name,sobrenome,idade);





    return 0;
}
