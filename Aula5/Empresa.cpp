#include "Empresa.h"
#include "FuncionarioCaixa.h"
#include "Calculadora.h"
#include <iostream>
using namespace std;

Empresa::Empresa(string nome, FuncionarioCaixa func1, FuncionarioCaixa func2):func1(func1),func2(func2){
    this->nome = nome;
}
string Empresa::getNome(){
    return nome;
}
void Empresa::setNome(string nome){
    this->nome = nome;
}
FuncionarioCaixa Empresa::getFunc1(FuncionarioCaixa func1){
    return func1;
}
void Empresa::setFunc1(FuncionarioCaixa func1){
    this->func1 = func1;
}
FuncionarioCaixa Empresa::getFunc2(FuncionarioCaixa func2){
    return func2;
}
void Empresa::setFunc2(FuncionarioCaixa func2){
    this->func2 = func2;
}
void Empresa::imprime_info(){
    cout << "\nInformações da Empresa:\n---------------\nNome: " << nome 
    << "\nFuncionario 1: " << endl;
    func1.imprime_info();
    cout << "\nFuncionario 2: " << endl; 
    func2.imprime_info(); 
}