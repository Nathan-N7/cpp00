#include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Uso: " << argv[0] << " <arquivo> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Erro: não foi possível abrir o arquivo " << filename << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Erro: não foi possível criar o arquivo " << filename + ".replace" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        outfile << replaceAll(line, s1, s2);
    }

    infile.close();
    outfile.close();
    return 0;
}
