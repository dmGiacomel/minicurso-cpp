#include <iostream>
#include <map>

template <typename key_type, typename value_type>
void printMap(const std::map<key_type, value_type>& mapa) {
    for (const auto& pair : mapa)
        std::cout << "Chave: " << pair.first << ", Valor: " << pair.second << std::endl;
}

int main() {
    // Criando um mapa de inteiros para strings
    std::map<int, std::string> mapa;

    // Inserindo pares chave-valor no mapa
    mapa[1] = "Maçã";
    mapa[2] = "Banana";
    mapa[3] = "Laranja";
    mapa[4] = "Pêra";

    std::cout << "Mapa inicial:\n";
    printMap(mapa);

    // Acessando valores por chave e modificando
    mapa[2] = "Uva";

    std::cout << "Mapa após modificar o valor da chave 2:\n";
    printMap(mapa);

    // Verificando se uma chave existe no mapa
    int chave = 3;
    if (mapa.find(chave) != mapa.end()) {
        std::cout << "A chave " << chave << " existe no mapa. Valor: " << mapa[chave] << "\n";
    } else {
        std::cout << "A chave " << chave << " não existe no mapa.\n";
    }

    // Removendo um par chave-valor do mapa
    mapa.erase(1);

    std::cout << "Mapa após remover a chave 1:\n";
    printMap(mapa);

    return 0;
}