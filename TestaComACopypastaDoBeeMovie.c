#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
    int i,j,temQuebra = 0,tamanho = 1000;
    char* texto = malloc(sizeof(char) * tamanho);
    char caractere;


    printf("Escreva o texto (minusculo): ");
    fgets(texto, tamanho, stdin);
    fseek(stdin, 0, SEEK_END);
    printf("Digite o caractere a ser retirado (minusculo): ");
    scanf(" %c", &caractere);

    do
    {
        for(i = 0;i < strlen(texto);i++)
        {
            if(texto[i] == '\n')
            {
                temQuebra = 1;
            }
        }
        if(temQuebra == 0)
        {
            fseek(stdin, 0, SEEK_END);
            tamanho = tamanho + 1000;
            texto = realloc(texto, sizeof(char) * tamanho);
            printf("Por favor, repita o texto(minusculo): ");
            fgets(texto, tamanho, stdin);
        }
     } while(temQuebra != 1);



     for(i = 0; i < strlen(texto); i++){
        while(texto[i] == caractere)
        {
            for(j = i; j < strlen(texto); j++)
            {
                texto[j] = texto[j+1];
            }
        }
    }
    printf("\nTEXTO: %s", texto);
}
