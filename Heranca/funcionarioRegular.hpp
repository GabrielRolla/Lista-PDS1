#ifndef FUNCIONARIOREGULAR_H
#define FUNCIONARIOREGULAR_H
#include <string>
#include "funcionario.hpp"
using std::string;

class FuncionarioRegular : public Funcionario
{
    private:
         

    public:

        FuncionarioRegular(string nome, int id, double salarioBase);

        double calcularSalarioTotal() override;
};

#endif