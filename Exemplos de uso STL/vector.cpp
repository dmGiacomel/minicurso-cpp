#include <iostream>
#include <vector>
#include <algorithm>

template <typename datatype>
void printList(const std::vector<datatype>& lista) {
    for (const auto& element : lista)
        std::cout << element << " ";
    std::cout << std::endl;
}

int main() {
    // Criando um vetor de inteiros vazio
    std::vector<int> vetor;

    // Adicionando elementos ao vetor
    vetor.push_back(3);
    vetor.push_back(2);
    vetor.push_back(1);
    vetor.push_back(4);

    std::cout << "Vetor inicial: ";
    printList(vetor);

    // Ordenando o vetor em ordem crescente
    std::sort(vetor.begin(), vetor.end());

    std::cout << "Vetor após ordenação crescente: ";
    printList(vetor);

    // Acessando elementos por índice e modificando
    vetor[2] = 30;

    // Iterando pelo vetor com ++ e --
    for (auto it = vetor.begin(); it != vetor.end(); ++it) {
        (*it)++;
    }

    std::vector<int>::iterator it = vetor.begin();
    std::cout << "Vetor após incremento de todos os elementos: ";
    printList(vetor);

    // Redimensionando o vetor
    vetor.resize(6, 0); // Define o tamanho para 6 elementos, preenchendo com valor padrão 0

    std::cout << "Vetor após redimensionamento para 6 elementos: ";
    printList(vetor);

    // Lendo entrada do usuário e adicionando ao vetor
    int novo_elemento;
    std::cout << "Digite um novo elemento para adicionar ao vetor: ";
    std::cin >> novo_elemento;

    vetor.push_back(novo_elemento);

    std::cout << "Vetor após adição do novo elemento: ";
    printList(vetor);



    return 0;
}
