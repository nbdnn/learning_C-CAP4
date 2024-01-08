/*
 * Criado por Guilherme Marcos Neves para capacitação
 */

#include "Cpf.hpp"

Cpf::Cpf(std::string paramNumeroCpf): numeroCpf(paramNumeroCpf) {
//    std::cout << "Cpf criado" << std::endl;
}

Cpf::Cpf(const Cpf& cpf) {
//    std::cout << "Cpf copiado" << std::endl;
    numeroCpf = cpf.recuperaNumero();
}

std::string Cpf::recuperaNumero() const {
    return this->numeroCpf;
}
