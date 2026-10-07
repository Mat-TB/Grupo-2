
#include <stdio.h>

int main(void)
{
    printf("Indique o valor do sensor(inteiro entre 0 e 1023)\n");
    int Dados;
    while(scanf(" %d",&Dados)!=1){
        printf("Inválido\n");
        while(getchar()!= '\n');
    }
float temp;
temp = 260*Dados/1023.0 - 20;

if (-10 < temp && temp < 190 ){
    printf("Temperatura: %.2f ºC\n",temp);
} 
else printf("valor fora da gama\n");

    

}