#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include "FuncionarioCaixa.h"
using namespace std;

class Empresa
{
private:
    string nome;
    FuncionarioCaixa func1;
    FuncionarioCaixa func2;
public:
    Empresa(string nome, FuncionarioCaixa func1, FuncionarioCaixa func2);
    string getNome();
    void setNome(string novoNome);
    FuncionarioCaixa getFunc1(FuncionarioCaixa func1);
    void setFunc1(FuncionarioCaixa func1);
    FuncionarioCaixa getFunc2(FuncionarioCaixa func2);
    void setFunc2(FuncionarioCaixa func2);
    void imprime_info();
};
#endif