#ifndef GERENTE_H
#define GERENTE_H
#include <string>
#include "funcionario.hpp"
using std::string;

class Gerente : public Funcionario
{
    private:
         double bonus_anual;

    public:

        Gerente(string nome, int id, double salarioBase, double bonus_anual);

        double calcularSalarioTotal() override;
};

#endif