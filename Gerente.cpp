/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "Gerente.hpp"

Gerente::Gerente(Cpf paramCpfFuncionario,
        std::string paramNomeFuncionario,
        float paramSalario) :
        Funcionario(
            paramCpfFuncionario,
            paramNomeFuncionario,
            paramSalario
        ) { }

float Gerente::bonificacao() const {
    return 0.5f*this->recuperaSalario();
}