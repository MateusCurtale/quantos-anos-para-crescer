#include <cs50.h>
#include <math.h>
#include <stdio.h>

void calcularAnos(int popInicial, int popFinal);

int main(void)
{

    // Pede o tamanho inicial da população ao usuário.
    int popInicial;
    do
    {
        popInicial = get_int("Digite o tamanho da população: \n");
    }
    while (popInicial < 9);

    // Pede o tamanho final esperado da populção para o usuário.
    int popFinal;
    do
    {
        popFinal = get_int("Digite o tamanho final da população: \n");
    }
    while (popFinal < popInicial);

    calcularAnos(popInicial, popFinal); // Calcula quantos anos o crescimento levará.
}

void calcularAnos(int popInicial, int popFinal) // calcula a quantidade de anos que a população levará para crescer.
{
    int anos = 0;
    while (popInicial < popFinal)
    {

        popInicial = popInicial + popInicial / 3 - popInicial / 4;
        anos++;
    }

    printf("Anos: %i\n", anos);
}
