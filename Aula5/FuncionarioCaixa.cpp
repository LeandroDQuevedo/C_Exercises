#include "FuncionarioCaixa.h"
#include "Calculadora.h"
#include <iostream>
using namespace std;

FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calc):calc(calc){
    this->nome = nome;
    this->endereco = endereco;
}
string FuncionarioCaixa::getNome(){
    return nome;
}
void FuncionarioCaixa::setNome(string nome){
    this->nome = nome;
}
string FuncionarioCaixa::getEndereco(){
    return endereco;
}
void FuncionarioCaixa::setEndereco(string endereco){
    this->endereco = endereco;
}
Calculadora FuncionarioCaixa::getCalc(){
    return calc;
}
void FuncionarioCaixa::setCalc(Calculadora calc){
    this->calc = calc;
}
float FuncionarioCaixa::soma(float valor1, float valor2){
    return calc.soma(valor1,valor2);
}
float FuncionarioCaixa::subtrai(float valor1, float valor2){
    return calc.subtrai(valor1,valor2);
}
float FuncionarioCaixa::multiplica(float valor1, float valor2){
    return calc.multiplica(valor1,valor2);
}
float FuncionarioCaixa::divide(float valor1, float valor2){
    return calc.divide(valor1,valor2);
}
float FuncionarioCaixa::eleva_ao_quadrado(float valor1){
    return calc.eleva_ao_quadrado(valor1);
}
float FuncionarioCaixa::eleva_ao_cubo(float valor1){
    return calc.eleva_ao_cubo(valor1);
}
void FuncionarioCaixa::imprime_info(){
    cout << "\nInformações do Funcionario:\n---------------\nNome: " << nome 
    << "\nEndereço: " << endereco << endl;
    calc.imprime_info();
}   