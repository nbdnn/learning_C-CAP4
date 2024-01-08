/*
 * Criado por Guilherme Marcos Neves para capacitação
 */

#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
    cout << "O saldo de " << conta.recuperaTitular().recuperaCpf().recuperaNumero() << " é: " << conta.recuperaSaldo() << endl;
}

int main() {
     Titular titular = Titular(
        Cpf("123.456.789-10"),
        "Vinicius");
    
    Conta umaConta = Conta(
        "123456",
        titular);
    umaConta.depositar(500);
    umaConta.sacar(200);

    ExibeSaldo(umaConta);

    // Titular outro = Titular(
        // Cpf("098.765.432-10"),
        // "Dias");

    Conta umaOutraConta = Conta(
        "654321",
        titular);
    umaOutraConta.depositar(300);
    umaOutraConta.sacar(50);

    ExibeSaldo(umaOutraConta);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    return 0;
}
