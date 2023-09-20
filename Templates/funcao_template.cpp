#include <iostream>

template <typename datatype>
datatype maior(datatype a, datatype b) {
    return (a > b) ? a : b;
}

int main() {
    // Exemplo de uso do template com números inteiros
    int numero1 = 10;
    int numero2 = 42;
    int resultadoInt = maior(numero1, numero2);
    std::cout << "Maior número inteiro: " << resultadoInt << std::endl;

    // Exemplo de uso do template com números de ponto flutuante
    double numero3 = 3.14;
    double numero4 = 2.71;
    double resultadoDouble = maior(numero3, numero4);
    std::cout << "Maior número de ponto flutuante: " << resultadoDouble << std::endl;

    return 0;
}
