/* 
 * Criado por Guilherme Marcos Neves para capacitação
 */

#pragma once
#include <string>
#include "Cpf.hpp"

class Titular {
public:
    Cpf cpfTitular;
private:
    std::string nomeTitular;

public:
    Titular(Cpf paramCpfTitular, std::string paramNomeTitular);
    Cpf recuperaCpf() const;

private:
    void verificaTamanhoDoNome();
};

