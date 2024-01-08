/*
 * Criado por Guilherme Marcos Neves para capacitação
 */

#include "Conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string paramNumeroConta, Titular paramTitularConta):
    numeroConta(paramNumeroConta),
    titularConta(paramTitularConta),
    saldoConta(0) {

    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    if (valorASacar > this->saldoConta) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    this->saldoConta -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    this->saldoConta += valorADepositar;
}

float Conta::recuperaSaldo() const {
    return this->saldoConta;
}

Titular Conta::recuperaTitular() const {
  return this->titularConta;
}

int Conta::recuperaNumeroDeContas() {
    return numeroDeContas;
}
