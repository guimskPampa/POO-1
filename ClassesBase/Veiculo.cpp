#include "Veiculo.h"

Veiculo::Veiculo(std::string _modelo, int _anoFabricacao, std::string _chassi, double _capacidadeCarga, std::string _localizacao){}
Veiculo::~Veiculo() {}

int Veiculo::setModelo(std::string _modelo) {
    if (!_modelo.empty()) {
        modelo = _modelo;
        return 1; //Sucesso
    }
    return 0; //Falha
}

int Veiculo::setAnoFabricacao(int _anoFabricacao) {
    if (_anoFabricacao > 0) {
        anoFabricacao = _anoFabricacao;
        return 1; //sucesso
    }
    return 0; //falha
}

int Veiculo::setAnoFabricacao(std::string  _anoFabricacao) {
    if (stoi(_anoFabricacao) > 0) {
        anoFabricacao = stoi(_anoFabricacao);
        return 1; //sucesso
    }
    return 0; //falha
}

int Veiculo::setChassi(std::string _chassi) {
    if (!_chassi.empty()) {
        chassi = _chassi;
        return 1; //sucesso
    }
    return 0; //falhas
}

std::string Veiculo::getModelo() const {
    return modelo;
}

int Veiculo::getAnoFabricacao() const {
    return anoFabricacao;
}

std::string Veiculo::getChassi() const {
    return chassi;
}

int Veiculo::setCapacidadeCarga(double _capacidadeCarga) {
    if (_capacidadeCarga > 0) {
        capacidadeCarga = _capacidadeCarga;
        return 1; //sucesso
    }
    return 0; //falha
}

int Veiculo::setLocalizacao(std::string _localizacao) {
    if (!_localizacao.empty()) {
        localizacao = _localizacao;
        return 1; //sucesso
    }
    return 0; //Falha
}

double Veiculo::getCapacidadeCarga() const {
    return capacidadeCarga;
}

std::string Veiculo::getLocalizacao() const {
    return localizacao;
}

bool Veiculo::operator==(const Veiculo & comparadoCapacidadeCarga) const{
return this->capacidadeCarga == comparadoCapacidadeCarga.capacidadeCarga;
}

bool Veiculo::operator==(const Veiculo & comparadoLocalizacao) const{
return this->localizacao== comparadoLocalizacao.localizacao;
}

bool Veiculo::operator==(const Veiculo & comparadoModelo) const{
return this->modelo == comparadoModelo.modelo;
}

bool Veiculo::operator==(const Veiculo & comparadoAnoFabricacao) const{
return this->anoFabricacao == comparadoAnoFabricacao.anoFabricacao;
}

bool Veiculo::operator==(const Veiculo & comparadoChassi) const{
return this->chassi == comparadoChassi.chassi;
}

std::ostream& operator<<(std::ostream& out, Veiculo* veiculo){
    out << "\nCapacidadeCarga: " << veiculo->getCapacidadeCarga()
    << "\nLocalizacao: "<< veiculo->getLocalizacao()
    << "\nModelo: " << veiculo->getModelo()
    << "\nAnoFabricacao: " << veiculo->getAnoFabricacao()
    << "\nChassi: " << veiculo->getChassi();
    return out;
}