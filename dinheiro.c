#include <stdio.h>

int calcular_moedas(int centavos)
{
    int n = 0;
    for (; centavos > 0; n++)
    {
        if (centavos >= 25)
        {
            centavos -= 25;
        }
        else if (centavos >= 10)
        {
            centavos -= 10;
        }
        else if (centavos >= 5)
        {
            centavos -= 5;
        }
        else
        {
            centavos -= 1;
        }
    }
    return n;
}
// o código eu fiz, mas o gemini ajudou na parte do retorno, no caso o início "int n = 0;" e "return n;"