/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "Funcionario.hpp"
class Caixa : public Funcionario {
private:
    /* data */
public:
    Caixa(Cpf paramCpfFuncionario,
    std::string paramNomeFuncionario,
    float paramSalario);
    float bonificacao() const;
};