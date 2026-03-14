#include <stdio.h>

int maior_valor(int x, int y, int z){
    int maior = 0;

    if (x >= y && x >=z)
    {
        maior = x;
    }
    
    if (y >= x && y >=z)
    {
        maior = y;
    }
    
    if (z >= y && z >=x)
    {
        maior = z;
    }
    
    return maior;
}

void main() {
int valores[3];

for (size_t i = 0; i < 3; i++)
{
    printf("Insira o valor %d: ", i+1);
    scanf("%d", &valores[i]);
}

printf("%d",maior_valor(valores[0],valores[1],valores[2]));


}