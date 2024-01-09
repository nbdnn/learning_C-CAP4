/*
* Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once

#include "Pessoa.hpp"

class Funcionario : public Pessoa {

private:
    float salario;

public:
    std::string recuperaNome() const;

    Funcionario(
        Cpf paramCpfFuncionario,
        std::string paramNomeFuncionario,
        float paramSalario
    );
};