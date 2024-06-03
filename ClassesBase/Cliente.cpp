#include "Cliente.h"

///métodos da classe Cliente

Cliente::Cliente(std::string _nome, std::string _idade, std::string _cpf, std::string _endereco, std::string _telefone) :
    nome(_nome), idade(_idade), cpf(_cpf), endereco(_endereco), telefone(_telefone) {}

Cliente::~Cliente() {}

int Cliente::setNome(std::string _nome) {
    if (!_nome.empty()) {
        nome = _nome;
        return 1;
    }
    return 0;
}

int Cliente::setIdade(std::string _idade) {
    idade = _idade;
    return 1;
}

int Cliente::setCpf(std::string _cpf) {
    if (!_cpf.empty()) {
        cpf = _cpf;
        return 1;
    }
    return 0;
}

int Cliente::setEndereco(std::string _endereco) {
    if (!_endereco.empty()) {
        endereco = _endereco;
        return 1;
    }
    return 0;
}

int Cliente::setTelefone(std::string _telefone) {
    if (!_telefone.empty()) {
        telefone = _telefone;
        return 1;
    }
    return 0;
}

std::string Cliente::getNome() const {
    return nome;
}

std::string Cliente::getIdade() const {
    return idade;
}

std::string Cliente::getCpf() const {
    return cpf;
}

std::string Cliente::getEndereco() const {
    return endereco;
}

std::string Cliente::getTelefone() const {
    return telefone;
}

bool Cliente::operator==(const Cliente & comparadoNome) const{
return this->nome == comparadoNome.nome;
}

bool Cliente::operator==(const Cliente & comparadoIdade) const{
return this->idade == comparadoIdade.idade;
}

bool Cliente::operator==(const Cliente & comparadoCpf) const{
return this->cpf == comparadoCpf.cpf;
}

bool Cliente::operator==(const Cliente & comparadoEndereco) const{
return this->endereco == comparadoEndereco.endereco;
}

bool Cliente::operator==(const Cliente & comparadoTelefone) const{
return this->telefone == comparadoTelefone.telefone;
}

std::ostream& operator<<(std::ostream& out, Cliente* cliente){
    out << "\nNome: "<< cliente->getNome()
    << "\nIdade: " << cliente->getIdade()
    << "\nCPF: " << cliente->getCpf()
    << "\nEndereco: " << cliente->getEndereco()
    << "\nTelefone: " << cliente->getTelefone();
    return out;
}
