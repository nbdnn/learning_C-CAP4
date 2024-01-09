/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(
    std::string paramNumeroConta,
    Titular paramTitularConta):

    Conta(paramNumeroConta, paramTitularConta) { }

void ContaPoupanca::sacar(float valorASacar){

    if(valorASacar < 0){
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifaDeSaque = 0.03f*valorASacar;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if(valorDoSaque > this->saldo){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    
    this->saldo -= valorDoSaque;
}