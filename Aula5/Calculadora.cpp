#include "Calculadora.h"
#include <iostream>
using namespace std;

Calculadora::Calculadora(string cor){
    this->cor = cor;
    memoria = 0;
};

float Calculadora::getMemoria(){
    return memoria;
}

void Calculadora::setMemoria(float memoria){
    this->memoria = memoria;
}

string Calculadora::getCor(){
    return cor;
}

void Calculadora::setCor(string cor){
    this->cor = cor;
}

float Calculadora::soma(float valor1, float valor2){
    memoria = valor1 + valor2;
    return memoria;
}
float Calculadora::subtrai(float valor1, float valor2){
    memoria = valor1 - valor2;
    return memoria;
}
float Calculadora::multiplica(float valor1, float valor2){
    memoria = valor1 * valor2;
    return memoria;
}
float Calculadora::divide(float valor1, float valor2){
    memoria = valor1 / valor2;
    return memoria;
}
float Calculadora::eleva_ao_quadrado(float valor1){
    memoria = valor1*valor1;
    return memoria;
}
float Calculadora::eleva_ao_cubo(float valor1){
    memoria = valor1*valor1*valor1;
    return memoria;
}
void Calculadora::imprime_info(){
    cout << "\nInformações da Calculadora:\n---------------\nCor: " << cor << "\nValor no display: " << memoria << endl; 
} 