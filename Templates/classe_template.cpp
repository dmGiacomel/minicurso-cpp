#include <iostream>
#include <vector>

template <typename datatype>
class MeuVetor {
private:
    std::vector<datatype> elementos;

public:
    // Adiciona um elemento ao vetor
    void adicionar(const datatype& elemento) {
        elementos.push_back(elemento);
    }

    // Acessa um elemento pelo índice
    datatype& operator[](size_t indice) {
        return elementos[indice];
    }

    // Imprime o vetor
    void imprimir() {
        for (const datatype& elemento : elementos) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Exemplo de uso da classe de vetor genérico
    MeuVetor<int> vetorInt;
    vetorInt.adicionar(1);
    vetorInt.adicionar(2);
    vetorInt.adicionar(3);

    MeuVetor<std::string> vetorString;
    vetorString.adicionar("Olá");
    vetorString.adicionar("Mundo");

    // Imprime os vetores
    std::cout << "Vetor de inteiros: ";
    vetorInt.imprimir();

    std::cout << "Vetor de strings: ";
    vetorString.imprimir();
    return 0;
}