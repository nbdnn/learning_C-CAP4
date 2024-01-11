/*
 * Criado por Guilherme Marcos Neves para capacitação
*/

#include "Funcionario.hpp"

class Gerente : public Funcionario {
public:
    Gerente(
        Cpf paramCpfFuncionario,
        std::string paramNomeFuncionario,
        float paramSalario);
    float bonificacao() const;
};