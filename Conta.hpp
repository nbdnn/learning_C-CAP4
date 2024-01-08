/*
 * Criado por Guilherme Marcos Neves para capacitação
 */

#pragma once
#include <string>
#include <iostream>
#include "Titular.hpp"

class Conta {
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numeroConta;
    Titular titularConta;
    float saldoConta;

public:
    Conta(std::string paramNumeroConta, Titular paramTitularConta);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperaSaldo() const;
    Titular recuperaTitular() const;
};
