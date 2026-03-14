#include <stdio.h>
void imprimirvalores(int x) {
    for (size_t i = 1; i < x+1; i++)
    {
        printf("%d \n", i);
    }
    
}


void main() {
int valor;


printf("Digite o valor: ");
scanf("%d", &valor);
imprimirvalores(valor);




}