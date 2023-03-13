//CONJECTURA DE COLLAZ
#include <stdio.h>

void main(void)
{
    int numero;
    char repetir;
    printf("CONJECTURA DE COLLAZ\n\n");
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        printf("%d\n", numero);
        while(numero != 1)
        {
            if(numero % 2 == 1)
            {
                numero = 3 * numero + 1;
            }
            else
            {
                numero = numero / 2;
            }
            printf("%d\n", numero);
        }
        do
        {
            printf("\nCalcular outro numero? (Y/N)\n");
            scanf(" %c", &repetir);
        }
        while(repetir != 'Y' && repetir != 'y' && repetir != 'N' && repetir != 'n');
        }
    while(repetir != 'n' && repetir != 'N');
}
