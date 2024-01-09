/*
Criado por Guilherme Neves para capacitação
*/

#ifndef CONTA_HPP
#define CONTA_HPP

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

protected:
    float saldo;

public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);

    std::string recuperaNumero() const;
    Titular recuperaTitular() const;
    float recuperaSaldo() const;

    Conta(
        std::string paramNumeroConta,
        Titular paramTitularConta);
    ~Conta();
};

#endif //CONTA_HPP