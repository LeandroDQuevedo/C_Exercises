#include <stdio.h>

void main() {
int notas[3];

    printf("Escreva a nota do trabalho: ");
    scanf("%d", &notas[0]);
    
    printf("Escreva a nota da prova: ");
    scanf("%d", &notas[1]);
    
    printf("Escreva a nota do teste: ");
    scanf("%d", &notas[2]);

printf("\n Nota final: %0.2f", (notas[0]*0.1)+(notas[1]*0.6)+(notas[2]*0.3));

}