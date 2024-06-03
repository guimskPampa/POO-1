#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include<iostream>

class Cliente {
private:
    std::string nome;
    std::string idade;
    std::string cpf;
    std::string endereco;
    std::string telefone;
    std::string email;


public:
    //construtor
    Cliente(std::string _nome, std::string _idade, std::string _cpf, std::string _endereco, std::string _telefone, std::string _email);
    //destrutor
    ~Cliente();

    //sets
    int setNome(std::string _nome);
    int setIdade(std::string _idade);
    int setCpf(std::string _cpf);
    int setEndereco(std::string _endereco);
    int setTelefone(std::string _telefone);
    int setEmail(std::string _email);


    //gets
    std::string getNome() const;
    std::string getIdade() const;
    std::string getCpf() const;
    std::string getEndereco() const;
    std::string getTelefone() const;
    std::string getEmail() const;


    //sobrecargas ==
    bool operator==(const Cliente & comparadoNome) const;
    bool operator==(const Cliente & comparadoIdade) const;
    bool operator==(const Cliente & comparadoCpf) const;
    bool operator==(const Cliente & comparadoEndereco) const;
    bool operator==(const Cliente & comparadoTelefone) const;
    bool operator==(const Cliente & comparadoEmail) const;

    
    //sobrecargas <<
    std::ostream& operator<<(std::ostream& out);

};

#endif // CLIENTE_H
