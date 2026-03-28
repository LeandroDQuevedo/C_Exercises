#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>
using namespace std;

class Calculadora
{
private:
    float memoria;
    string cor;
public:
    Calculadora(string cor);
    float getMemoria();
    string getCor();
    void setMemoria(float memoria);
    void setCor(string cor);
    float soma(float valor1, float valor2);
    float subtrai(float valor1, float valor2);
    float multiplica(float valor1, float valor2);
    float divide(float valor1, float valor2);
    float eleva_ao_quadrado(float valor1);
    float eleva_ao_cubo(float valor1);
    void imprime_info();        
};


#endif