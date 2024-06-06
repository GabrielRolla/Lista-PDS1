#include "gerente.hpp"


Gerente::Gerente(string nome, int id, double salarioBase, double bonus_anual)
    : Funcionario(nome, id, salarioBase), bonus_anual(bonus_anual) {}

double Gerente::calcularSalarioTotal()
{
    double soma = salarioBase + bonus_anual;
    return soma;
}