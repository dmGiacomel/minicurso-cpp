#include <iostream>

class Vetor2D {
private:
    double x;
    double y;

public:
    // Construtor padrão
    Vetor2D() : x(0.0), y(0.0) {}

    // Construtor personalizado
    Vetor2D(double x, double y) : x(x), y(y) {}

    // Destrutor (não é necessário, mas incluído para fins didáticos)
    ~Vetor2D() {}

    // Método para somar dois vetores
    Vetor2D somar(const Vetor2D& outro) const {
        return Vetor2D(x + outro.x, y + outro.y);
    }

    // Método para dividir o vetor por um escalar (evitar divisão por zero)
    Vetor2D dividir(double escalar) const {
        if (escalar != 0) {
            return Vetor2D(x / escalar, y / escalar);
        } else {
            std::cerr << "Erro: Divisão por zero!\n";
            return *this; // Retorna o próprio vetor se houver divisão por zero
        }
    }

    // Método para multiplicar o vetor por um escalar
    Vetor2D multiplicarPorEscalar(double escalar) const {
        return Vetor2D(x * escalar, y * escalar);
    }

    // Método para verificar a igualdade de dois vetores
    bool igual(const Vetor2D& outro) const {
        return (x == outro.x) && (y == outro.y);
    }

    // Método para calcular o produto escalar de dois vetores
    double produtoEscalar(const Vetor2D& outro) const {
        return (x * outro.x) + (y * outro.y);
    }

    // Método para exibir o vetor
    void mostrar() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    // Criando vetores 2D
    Vetor2D v1(3.0, 4.0);
    Vetor2D v2(1.0, 2.0);

    // Exibindo os vetores
    std::cout << "Vetor v1: ";
    v1.mostrar();
    std::cout << "Vetor v2: ";
    v2.mostrar();

    // Somando dois vetores
    Vetor2D soma = v1.somar(v2);
    std::cout << "Soma de v1 e v2: ";
    soma.mostrar();

    // Dividindo um vetor por um escalar
    Vetor2D divisao = v1.dividir(2.0);
    std::cout << "Divisão de v1 por 2: ";
    divisao.mostrar();

    // Multiplicando um vetor por um escalar
    double escalar = 1.5;
    Vetor2D multiplicacao = v2.multiplicarPorEscalar(escalar);
    std::cout << "Multiplicação de v2 por " << escalar << ": ";
    multiplicacao.mostrar();

    // Verificando igualdade de vetores
    if (v1.igual(v2)) {
        std::cout << "v1 e v2 são iguais.\n";
    } else {
        std::cout << "v1 e v2 não são iguais.\n";
    }

    // Calculando o produto escalar
    double produto_escalar = v1.produtoEscalar(v2);
    std::cout << "Produto escalar de v1 e v2: " << produto_escalar << "\n";

    return 0;
}