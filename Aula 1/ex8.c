#include <stdio.h>

void main() {
int val1;
int val2;

printf("Digite o 1° num\n -");
scanf("%d", &val1);
printf("Digite o 2° num\n -");
scanf("%d", &val2);

    int maior;
    int menor;
    int pares = 0;
    int impares = 0;

    if (val1 > val2)
    {
        maior = val1;
        menor = val2;
    }
    else
    {
        maior = val2;
        menor = val1;
    }
    
    for (size_t i = menor; i < maior+1; i++)
    {
        if (i % 2 == 0)
        {
            pares += i;
        }
        else
        {
            impares += i;
        }
    }
    
    printf("Valor pares: %d\n", pares);
    printf("Valor impares: %d\n", impares);



}