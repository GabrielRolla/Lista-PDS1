#include <iostream>
#include "funcionarioRegular.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"

using std::cout;
using std::endl;
using std::string;

int main() {
    using std::string;
    FuncionarioRegular funcionario("Laudelio", 1, 700);
    Gerente gerente("Glenio", 2, 389248, 702);
    Estagiario estagiario("Robervaldo", 3, 5555);


    cout << "Salário total do Funcionário Regular: " << funcionario.calcularSalarioTotal() << endl;
    cout << "Salário total do Gerente: " << gerente.calcularSalarioTotal() << endl;
    cout << "Salário total do Estagiário: " << estagiario.calcularSalarioTotal() << endl;

    return 0;

}