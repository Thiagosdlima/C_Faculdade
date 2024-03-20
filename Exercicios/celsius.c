#include<stdio.h>
#include<locale.h>

int main()
{
    //Construa um algoritmo que faça a leitura de uma temperatura em graus Celsius e a converta para Fahrenheit.
    setlocale(LC_ALL,"Portuguese");
    float c, f;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    f = (9 * c + 160) / 5;
    printf("%.2f, é a temperatura convertida em Fahrenheit\n",f);
    return 0;
}