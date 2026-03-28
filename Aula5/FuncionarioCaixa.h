#ifndef FUNCIONARIOCAIXA_H
#define FUNCIONARIOCAIXA_H
#include <string>
#include "Calculadora.h"
using namespace std;
class FuncionarioCaixa
{
private:
    string nome;
    string endereco;
    Calculadora calc;
public:
    FuncionarioCaixa(string nome, string endereco, Calculadora calc);
    string getNome();
    void setNome(string nome);
    string getEndereco();
    void setEndereco(string endereco);
    Calculadora getCalc();
    void setCalc(Calculadora calc);
    float soma(float valor1, float valor2);
    float subtrai(float valor1, float valor2);
    float multiplica(float valor1, float valor2);
    float divide(float valor1, float valor2);
    float eleva_ao_quadrado(float valor1);
    float eleva_ao_cubo(float valor1);
    void imprime_info();   
};
#endif