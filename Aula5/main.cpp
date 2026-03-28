#include "Calculadora.h"
#include "FuncionarioCaixa.h"
#include "Empresa.h"
#include <iostream>

using namespace std;

int main()
{
    Calculadora Casio = Calculadora("Verde água");
    Calculadora Tilibra = Calculadora("Azul do céu");

    FuncionarioCaixa CaixaJunior = FuncionarioCaixa("Roberto Thalles da Silva", "Cafundó do judas, 15, Brasil", Casio);    
    FuncionarioCaixa CaixaSenior = FuncionarioCaixa("Marina da Silva Velho", "Bloco 2 do mundo invertido, Inglaterra", Tilibra);

    cout << "Imprimindo os valores das operações do " << CaixaJunior.getNome() << ":\n---------------------" << endl;
    cout << "2+2 = " << CaixaJunior.soma(2,2) << endl << "5-4 = " << CaixaJunior.subtrai(5,4) << endl << "2x3 = " << CaixaJunior.multiplica(2,3) << endl;
    cout << "Imprimindo os valores das operações do " << CaixaSenior.getNome() << ":\n---------------------" << endl;
    cout << "6/3 = " << CaixaSenior.divide(6,3) << endl << "7+2 = " << CaixaSenior.soma(7,2) << endl << "8x3 = " << CaixaSenior.multiplica(8,3) << endl;

    Empresa Mombach = Empresa("Mombach", CaixaJunior, CaixaSenior);

    Mombach.imprime_info();


    return 0;
}
