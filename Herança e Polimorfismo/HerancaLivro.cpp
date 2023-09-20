#include <iostream>
#include <string>

class Obra {
protected:
    std::string titulo;
    std::string autor;

public:
    // Construtor da classe base
    Obra(const std::string& titulo, const std::string& autor)
        : titulo(titulo), autor(autor) {}

    // Método para exibir informações básicas da obra
    void mostrarInfo() const {
        std::cout << "Título da Obra: " << titulo << std::endl;
        std::cout << "Autor da Obra: " << autor << std::endl;
    }
};

class Livro : public Obra {
private:
    int numPaginas;

public:
    // Construtor da classe derivada
    Livro(const std::string& titulo, const std::string& autor, int numPaginas)
        : Obra(titulo, autor), numPaginas(numPaginas) {}

    // Método para exibir informações detalhadas do livro
    void mostrarDetalhes() const {
        mostrarInfo(); // Chama o método da classe base para exibir informações básicas
        std::cout << "Número de Páginas do Livro: " << numPaginas << std::endl;
    }
};

int main() {
    // Criando um livro que herda de uma obra
    Livro livro("Aventuras de Sherlock Holmes", "Arthur Conan Doyle", 256);

    // Exibindo informações detalhadas do livro
    std::cout << "Informações do Livro:\n";
    livro.mostrarDetalhes();

    return 0;
}
