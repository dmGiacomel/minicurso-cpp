#include <iostream>
#include <list>
#include <algorithm>

template <typename datatype>
void printList(std::list<datatype>& lista) {
    for (const auto& element : lista)
        std::cout << element << " ";
    std::cout << std::endl;
}

int main() {

    // Instanciando uma lista de inteiros vazia
    std::list<int> lista;

    // Adição de elementos na cauda da lista
    lista.emplace_back(1);
    lista.emplace_back(2);

    printList<int>(lista);

    // Adição de elementos na cabeça da lista
    lista.emplace_front(3);

    // Guardando a posição do elemento 3 (que está na cabeça da lista) em um iterador
    auto posicao_do_3 = lista.cbegin();

    lista.emplace_front(4);
    lista.emplace_front(10);

    // Inserção do valor 80 antes do elemento 3
    lista.emplace(posicao_do_3, 80);

    printList<int>(lista);

    // Acessando o primeiro elemento da lista
    std::cout << "Primeiro elemento da lista: " << lista.front() << "\n";

    // Removendo o primeiro elemento da lista
    lista.pop_front();

    // Removendo o último elemento da lista
    lista.pop_back();

    printList<int>(lista);

    // Verificando se a lista está vazia
    if (lista.empty()) {
        std::cout << "A lista está vazia.\n";
    } else {
        std::cout << "A lista não está vazia.\n";
    }

    // Buscando um elemento na lista
    int elemento_busca = 4;
    auto it = std::find(lista.begin(), lista.end(), elemento_busca);

    if (it != lista.end()) {
        std::cout << "Elemento " << elemento_busca << " encontrado na posição " << std::distance(lista.begin(), it) << ".\n";
    } else {
        std::cout << "Elemento " << elemento_busca << " não encontrado na lista.\n";
    }

    return 0;
}
