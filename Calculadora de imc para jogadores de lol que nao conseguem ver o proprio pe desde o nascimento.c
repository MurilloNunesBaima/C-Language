#include <stdio.h>

int main()
{
    float altura, peso, imc;
    printf("CALCULADORA INDICE DE MASSA CORPORAL\n\n");
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("IMC = %.1f\nClassificacao: ", imc);

    if(imc < 18.5)
    {
        printf("MAGREZA\n");
    }
    else if(imc >= 18.5 && imc < 25.0)
    {
        printf("NORMAL\n");
    }
        else if(imc >= 25.0 && imc < 30.0)
        {
            printf("SOBREPESO\n");
        }
             else if(imc >= 30.0 && imc < 40.0)
             {
                 printf("OBESIDADE\n");
             }
                  else if(imc >= 40.0)
                  {
                      printf("OBESIDADE GRAVE\n");
                  }
    return 0;
}
