#include <stdio.h>
int main(void)
{
    int valorsensor;
    printf("_________________________________________________\n\n");
    printf("           Calculadora de temperatura\n");
    printf("_________________________________________________\n\n");
    printf("Se pretende sair do programa digite o número -1 !\n\n");
    while (valorsensor != -1){
        printf("Valor do sensor (inteiro entre 0 e 1023):");
        if (scanf(" %d",&valorsensor) != 1)
        {
            printf("Valor rejeitado, insira um número inteiro.\n");
            while(getchar()!='\n') {}
        }
        else
        {
            float temp;
            temp=260.0*valorsensor/1023-20;
            if (valorsensor == -1)
            {
                break;
            }
            else if (temp > -10 && temp < 190)
            {
                printf("O valor da temperatura é: %.2f ºC\n", temp);
            }
            else
            {
                printf("Valor fora da gama.\n");
            }
        }
    }
}