#include <iostream>
#include <string>

class Livro {
private:
    std::string titulo;
    std::string autor;
    int numPaginas;

public:
    // Construtor padrão
    Livro() : titulo(""), autor(""), numPaginas(0) {}

    // Construtor personalizado
    Livro(const std::string& titulo, const std::string& autor, int numPaginas)
        : titulo(titulo), autor(autor), numPaginas(numPaginas) {}

    // Método para exibir informações sobre o livro
    void mostrarInfo() const {
        std::cout << "Título: " << titulo << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "Número de Páginas: " << numPaginas << std::endl;
    }
};

int main() {
    // Criando um livro
    Livro livro("Aventuras de Sherlock Holmes", "Arthur Conan Doyle", 256);

    // Exibindo informações sobre o livro
    std::cout << "Informações do Livro:\n";
    livro.mostrarInfo();

    return 0;
}
