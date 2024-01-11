/*
* Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once

#include <string>
#include <iostream>
#include "Conta.hpp"

class ContaCorrente final : public Conta {

public:
    float taxaDeSaque() const override;
    ContaCorrente(
        std::string paramNumeroConta,
        Titular paramTitularConta);
};