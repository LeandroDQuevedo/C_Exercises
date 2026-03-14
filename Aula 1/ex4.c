#include <stdio.h>

void main() {
int num;

printf("Insira o num: ");
scanf("%d", &num);

if (num % 2 == 0)
    printf("O num %d é par", num);
else
    printf("O num %d é impar", num);

}