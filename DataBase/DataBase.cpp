#include "DataBase.h"

std::vector<std::string>  getData (){
    // File pointer
    std::fstream fin;

    // Read the Data from the file
    // as String Vector
    std::vector<std::string> colunas;
    std::vector<std::string> matrizDados;

    //row, palavras da linha
    //linha, variavel com uma linha 
    std::string linhas, words, temp;

     // Open an existing file
    fin.open("../dados_entregas.csv", std::ios::in);

    // Get the roll number
    // of which the data is required
    int rollNum, roll2, count = 0;

    while (!fin.eof()) {
  
        colunas.clear();

        // read an entire row and
        // store it in a string variable 'line'
        getline(fin, linhas);

        // used for breaking words
        std::stringstream s(linhas);

        // read every column data of a row and
        // store it in a string variable, 'words'
        while (getline(s, words, ',')) {
  
            // add all the column data
            // of a row to a vector
            colunas.push_back(words);
        }
        matrizDados.push_back(colunas[size(colunas)]);
    }
    return matrizDados;
}
