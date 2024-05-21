#include <stdio.h>

int primo(int numero)
{
    int digito = numero, a = 2;
    for(a;a<numero;a++)
    {
        if(numero % a == 0)
        {
            return 0; // não é primo
        }
    }
    return 1; // é primo
}

int main()
{
    int variavel = 0;
    printf("\n Checador de números primos .\n");
    printf("\n Número a ser checado: ");
    scanf("%i", &variavel);
    if(primo(variavel) == 1)
    {
        printf("\n É primo.");
    }
    else
    {
        printf("\n Não é primo.");
    }
    return 0;
}