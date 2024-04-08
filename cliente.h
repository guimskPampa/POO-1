#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nome;
    std::string idade;
    std::string cpf;
    std::string endereco;
    std::string telefone;

public:
    Cliente(std::string _nome, std::string _idade, std::string _cpf, std::string _endereco, std::string _telefone);
    ~Cliente();

    int setNome(std::string _nome);
    int setIdade(std::string _idade);
    int setCpf(std::string _cpf);
    int setEndereco(std::string _endereco);
    int setTelefone(std::string _telefone);

    std::string getNome() const;
    std::string getIdade() const;
    std::string getCpf() const;
    std::string getEndereco() const;
    std::string getTelefone() const;
};

#endif // CLIENTE_H
