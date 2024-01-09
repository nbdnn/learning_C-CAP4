/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#pragma once

#include <string>
#include <iostream>
#include "Conta.hpp"

class ContaPoupanca : public Conta {
private:
    /* data */
public:
    void sacar(float valorASacar);
    ContaPoupanca(
        std::string paramNumeroConta,
        Titular paramTitularConta);
};

