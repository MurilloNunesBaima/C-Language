#include <stdio.h>

void main(void)
{
    int n, i, menor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    float soma = 0, altura[n], porc;
    char nome[n][99];
    menor = 0;
    for(i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);

        soma = soma + altura[i];
        if(idade[i] < 16)
        {
            menor++;
        }

    }
    porc = (float) menor * 100 / n;

    printf("\nAltura media: %.2f\n", soma / n);
    printf("Pessoas com menos de 16 anos: %.1f%%\n", porc);

    for(int i = 0; i < n; i++)
    {
        if(idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }
    }

}
