#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;


class Veiculo {

    protected:

        string marca;
        string modelo;
        int capacidade; // Capacidade de carga em toneladas

    public:
    
        Veiculo(const string& marca, const string& modelo, int capacidade)
        : marca(marca), modelo(modelo), capacidade(capacidade) {}
        
        virtual void exibirDados() const {
            cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n";
        }
};

class Caminhao : public Veiculo {

    private:

        int eixos;

    public:

        Caminhao(const string& marca, const string& modelo, int capacidade, int eixos)
        : Veiculo(marca, modelo, capacidade), eixos(eixos) {}

        void exibirDados() const override {
            cout << "Caminhão - ";
            Veiculo::exibirDados();
            cout << "Eixos: " << eixos << "\n";
        }
};

class Van : public Veiculo {
    private:

        int passageiros;
        
    public:
        Van(const string& marca, const string& modelo, int capacidade, int passageiros)
        : Veiculo(marca, modelo, capacidade), passageiros(passageiros) {}

        void exibirDados() const override {
            cout << "Van - ";
            Veiculo::exibirDados();
            cout << "Passageiros: " << passageiros << "\n";
        }
    };

int main() {
    
    Veiculo* caminhao = new Caminhao("Volvo", "FH16", 20, 4);
    Veiculo* van = new Van("Mercedes-Benz", "Sprinter", 3, 12);
    
    std::vector<Veiculo*> veiculos;
    veiculos.push_back(caminhao);
    veiculos.push_back(van);

    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
    }

    for (auto& veiculo : veiculos) {
        delete veiculo;
    }
    
    return 0;
}