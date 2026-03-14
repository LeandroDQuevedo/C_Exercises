#include <stdio.h>

void chamador(int x[]){
int media = (x[0] + x[1] + x[2]) / 3;

if (x[0] < 0 || x[1] < 0 || x[2] < 0)
{
   printf("ERRO!");
}
else if (media <= 4)
{
    printf("D");
}
else if (media <= 7)
{
    printf("C");
}
else if (media <= 9)
{
    printf("B");
}
else if (media <= 10)
{
    printf("A");
}

}

void main() {
int notas[3];

for (size_t i = 0; i < 3; i++)
{
    printf("Digite a nota %d: ", i+1);
    scanf("%d", &notas[i]);
}

chamador(notas);

}