/*
 * Criado por Guilherme Marcos Neves para capacitação
 */

#include "Titular.hpp"
#include <iostream>

Titular::Titular(
    Cpf paramCpfTitular,
    std::string paramNomeTitular):
  
    cpfTitular(paramCpfTitular),
    nomeTitular(paramNomeTitular) {

      verificaTamanhoDoNome();
}

void Titular::verificaTamanhoDoNome() {
  if (nomeTitular.size() < 5) {
    std::cout << "Nome muito curto" << std::endl;
    exit(1);
  }
}

Cpf Titular::recuperaCpf() const {
  return this->cpfTitular;
}
