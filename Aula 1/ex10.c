#include <stdio.h>

void main() {
int val1;
int val_fatorial = 1;

printf("Digite o numero da fatorial: ");
scanf("%d", &val1);

for (size_t i = 1; i < val1; i++)
{
    val_fatorial += i*val_fatorial;
}

printf("Valor da fatorial: %d", val_fatorial);

}