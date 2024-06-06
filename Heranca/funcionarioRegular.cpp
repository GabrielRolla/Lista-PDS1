#include "funcionarioRegular.hpp"


FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}

double FuncionarioRegular::calcularSalarioTotal()
{
    return salarioBase;
}