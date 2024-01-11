/*
Criado por Guilherme Neves para capacitação
*/

#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
    cout << "Saldo de " << conta.recuperaTitular().recuperaCpf().recuperaNumero() << " é : " << conta.recuperaSaldo() << endl;
}

void RealizaSaque (Conta& conta) {
    conta.sacar(200);
}

// void ExibeSaldo(const Conta& conta) {
//     cout << "Saldo é : " << conta.recuperaSaldo() << endl;
// } n

int main(){

    ContaCorrente umaConta = ContaCorrente(
        "123456",
        Titular(
            string("123.456.789-10"),
            "Vinicius"));
    
    umaConta.depositar(500);
    umaConta.sacar(200);

    ContaPoupanca umaOutraConta = ContaPoupanca(
        "654321",
        Titular(
            string("019.876.543-21"),
            "Dias Cardoso"));

    umaOutraConta.depositar(500);
    RealizaSaque(umaOutraConta);

    ContaCorrente maisUmaConta = ContaCorrente(
        "654321",
        Titular(
            string("019.876.543-21"),
            "Gabriel"));

    maisUmaConta.depositar(1000);
    maisUmaConta.sacar(700);

    ExibeSaldo(umaConta);
    ExibeSaldo(umaOutraConta);
    ExibeSaldo(maisUmaConta);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Funcionario funcionario(
        Cpf("123.456.789-10"), "Dias Vinicius", 1000
    );

    cout << "Nome do funcionário: " << funcionario.recuperaNome() << endl;

    return 0;
} 