#include <iostream>

class Retangulo {
private:
    double largura;
    double altura;

public:
    // Construtor padrão
    Retangulo() : largura(0.0), altura(0.0) {}

    // Construtor personalizado
    Retangulo(double largura, double altura) : largura(largura), altura(altura) {}

    // Método para calcular a área do retângulo
    double calcularArea() const {
        return largura * altura;
    }

    // Método para calcular o perímetro do retângulo
    double calcularPerimetro() const {
        return 2 * (largura + altura);
    }

    // Método para exibir as dimensões do retângulo
    void mostrarDimensoes() const {
        std::cout << "Largura: " << largura << ", Altura: " << altura << std::endl;
    }
};

int main() {
    // Criando um retângulo
    Retangulo retangulo(5.0, 3.0);

    // Exibindo as dimensões do retângulo
    std::cout << "Dimensões do retângulo:\n";
    retangulo.mostrarDimensoes();

    // Calculando e exibindo a área e o perímetro
    std::cout << "Área do retângulo: " << retangulo.calcularArea() << std::endl;
    std::cout << "Perímetro do retângulo: " << retangulo.calcularPerimetro() << std::endl;

    return 0;
}
