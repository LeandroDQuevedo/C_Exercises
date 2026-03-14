#include <stdio.h>

void main() {
int valor;
double valor_corrigido;


printf("Insira o preço: ");
scanf("%d", &valor);

if (valor < 100)
{
    valor_corrigido = valor + valor*0.1;
}
else if (valor >= 100 && valor < 300)
{
    valor_corrigido = valor + valor*0.2;
}
else if (valor >= 300 && valor < 1000)
{
    valor_corrigido = valor + valor*0.5;
}
else
    printf("ERRO!");


    printf("Seu valor é: %0.2f", valor_corrigido);
}