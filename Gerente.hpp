/*
 * Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once
#include "Funcionario.hpp"

class Gerente final: public Funcionario {
public:
    Gerente(
        Cpf paramCpfFuncionario,
        std::string paramNomeFuncionario,
        float paramSalario);
    float bonificacao() const;
};