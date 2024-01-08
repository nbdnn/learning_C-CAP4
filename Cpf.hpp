/* 
 * Criado por Guilherme Marcos Neves para capacitação
 */

#pragma once
#include <string>
#include <iostream>

class Cpf {
private:
    std::string numeroCpf;
public:
    explicit Cpf(std::string numero);
    Cpf(const Cpf& cpf);
    std::string recuperaNumero() const;
};

