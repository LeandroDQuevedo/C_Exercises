#include <stdio.h>

void main() {
int qtde;
printf("Quantos números irá digitar?\n -");
scanf("%d", &qtde);

for (size_t i = 0; i < qtde; i++)
{
    int temp_num;

    printf("Digite o %d° número: ", i+1);
    scanf("%d", &temp_num);
    if (temp_num < 0)
        printf("Seu número é negativo!\n");
    else if (temp_num > 0)
        printf("Seu número é positivo!\n");
    else
        printf("Seu número é zero!\n");
    

}

}