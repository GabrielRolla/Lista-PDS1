#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Grafo {
private:
    int numVertices; // Número de vértices
    vector<vector<int>> adjList; // Lista de adjacência

public:
    // Construtor
    Grafo(int vertices) : numVertices(vertices), adjList(vertices) {}

    // Adiciona uma aresta ao grafo (não direcionado)
    void add_aresta(int v1, int v2) {
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }

    // Verifica se dois vértices são vizinhos
    bool sao_vizinhos(int v1, int v2) {
        for (int vizinho : adjList[v1]) {
            if (vizinho == v2) {
                return true;
            }
        }
        return false;
    }

    // Retorna a lista de vizinhos de um dado vértice
    vector<int> obterVizinhos(int vertice) {
        return adjList[vertice];
    }

    // Método para exibir o grafo
    void exibir_grafo() {
        for (int i = 0; i < numVertices; ++i) {
            cout << "Vértice " << i << ":";
            for (int vizinho : adjList[i]) {
                cout << " -> " << vizinho;
            }
            cout << endl;
        }
    }
};

// Função principal para testar a classe Grafo
int main() {
    // Cria um grafo com 5 vértices
    Grafo grafo(5);

    // Adiciona algumas arestas
    grafo.add_aresta(0, 1);
    grafo.add_aresta(0, 4);
    grafo.add_aresta(1, 2);
    grafo.add_aresta(1, 3);
    grafo.add_aresta(1, 4);
    grafo.add_aresta(2, 3);
    grafo.add_aresta(3, 4);

    // Exibe o grafo
    grafo.exibir_grafo();

    // Testa se dois vértices são vizinhos
    cout << "0 e 1 são vizinhos? " << (grafo.sao_vizinhos(0, 1) ? "Sim" : "Não") << endl;
    cout << "0 e 2 são vizinhos? " << (grafo.sao_vizinhos(0, 2) ? "Sim" : "Não") << endl;

    // Obtém e exibe a lista de vizinhos de um vértice
    vector<int> vizinhos = grafo.obterVizinhos(1);
    cout << "Vizinhos do vértice 1: ";
    for (int vizinho : vizinhos) {
        cout << vizinho << " ";
    }
    cout << endl;

    return 0;
}