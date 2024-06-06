#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H
#include <string>
#include "funcionario.hpp"
using std::string;

class Estagiario : public Funcionario
{
    private:
         double bonus_anual;

    public:

        Estagiario(string nome, int id, double salarioBase);

        double calcularSalarioTotal() override;
};

#endif