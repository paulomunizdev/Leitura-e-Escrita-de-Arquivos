#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Parte 1: Escrita em um arquivo
    std::ofstream arquivo_saida("exemplo.txt");

    if (arquivo_saida.is_open()) {
        std::cout << "Parte 1: Escrevendo no arquivo...\n";

        // Escrevendo dados no arquivo
        arquivo_saida << "Olá, este é um exemplo de escrita em arquivo.\n";
        arquivo_saida << "Aprender C++ é muito divertido!\n";

        // Fechando o arquivo
        arquivo_saida.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo para escrita.\n";
        return 1;  // Saindo com código de erro
    }

    // Parte 2: Leitura do arquivo
    std::ifstream arquivo_entrada("exemplo.txt");

    if (arquivo_entrada.is_open()) {
        std::cout << "\nParte 2: Lendo do arquivo...\n";

        std::string linha;
        // Lendo o arquivo linha por linha
        while (std::getline(arquivo_entrada, linha)) {
            std::cout << linha << "\n";
        }

        // Fechando o arquivo de leitura
        arquivo_entrada.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo para leitura.\n";
        return 1;  // Saindo com código de erro
    }

    return 0;  // Programa concluído com sucesso
}
