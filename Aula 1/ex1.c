#include <stdio.h>

void main() {
int numero[5];
for (size_t i = 0; i < 5; i++)
{
    scanf("%d", &numero[i]);
}


printf("\n Soma: %d", numero[1] + numero[2] + numero[3] + numero[4] + numero[0]);
printf("\n Soma: %d", numero[1] * numero[2] * numero[3] * numero[4] * numero[0]);


}