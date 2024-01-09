/*
Criado por Guilherme Neves para capacitação
*/

#ifndef TITULAR_HPP
#define TITULAR_HPP

#include <string>
#include <iostream>
#include "Pessoa.hpp"

class Titular : public Pessoa {
public:
    Titular(
        Cpf paramCpfTitular,
        std::string paramNomeTitular);
};

#endif //TITULAR_HPP