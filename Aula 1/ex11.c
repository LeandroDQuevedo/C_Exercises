#include <stdio.h>

void main() {
int numero;
int primo = 1;

printf("Digite o número\n - ");
scanf("%d", &numero);

for (size_t i = 2; i < numero; i++)
{
    if (numero % i == 0)
    {
       primo = 0;
    }
    if (numero == 2)
    {
        primo = 1;
    }
    
    
}

if (primo)
{
    printf("Seu número é primo");
}
else
    printf("Seu número não é primo");



}