#include <stdio.h>
int somavalores(int x){
    if (x < 0)
    {
        return -1;
    }
    int soma = 0;
    for (size_t i = 1; i < x+1; i++)
    {
        soma += i;
    }
    return soma;
}


void main() {
int val1;

printf("Digite o valor: ");
scanf("%d", &val1);

printf("A soma dos valores é: %d", somavalores(val1));

}