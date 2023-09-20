#include <iostream>
#include <string>

class Obra {
protected:
    std::string titulo;
    std::string autor;

public:
    Obra(const std::string& titulo, const std::string& autor)
        : titulo(titulo), autor(autor) {}

    // Método virtual para exibir informações básicas da obra
    virtual void mostrarInfo() const {
        std::cout << "Título da Obra: " << titulo << std::endl;
        std::cout << "Autor da Obra: " << autor << std::endl;
    }
};

class Livro : public Obra {
private:
    int numPaginas;

public:
    Livro(const std::string& titulo, const std::string& autor, int numPaginas)
        : Obra(titulo, autor), numPaginas(numPaginas) {}

    // Sobrescrita do método para exibir informações detalhadas do livro
    void mostrarInfo() const override{
        std::cout << "Título do Livro: " << titulo << std::endl;
        std::cout << "Autor do Livro: " << autor << std::endl;
        std::cout << "Número de Páginas do Livro: " << numPaginas << std::endl;
    }
};

int main() {
    Livro livro("Aventuras de Sherlock Holmes", "Arthur Conan Doyle", 256);

    // Chama o método mostrarInfo da classe Livro (sobrescrito)
    livro.mostrarInfo();

    // Chama o método mostrarInfo da classe base usando um ponteiro para a classe base
    const Obra* ptrObra = &livro;
    ptrObra->mostrarInfo();

    return 0;
}