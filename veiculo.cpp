#include "Veiculo.h"

//metodos da classe VeiculoBase
VeiculoBase::VeiculoBase(std::string _modelo, int _anoFabricacao, std::string _chassi) :
    modelo(_modelo), anoFabricacao(_anoFabricacao), chassi(_chassi) {}

VeiculoBase::~VeiculoBase() {}

int VeiculoBase::setModelo(std::string _modelo) {
    if (!_modelo.empty()) {
        modelo = _modelo;
        return 1; //Sucesso
    }
    return 0; //Falha
}

int VeiculoBase::setAnoFabricacao(int _anoFabricacao) {
    if (_anoFabricacao > 0) {
        anoFabricacao = _anoFabricacao;
        return 1; //sucesso
    }
    return 0; //falha
}

int VeiculoBase::setChassi(std::string _chassi) {
    if (!_chassi.empty()) {
        chassi = _chassi;
        return 1; //sucesso
    }
    return 0; //falhas
}

std::string VeiculoBase::getModelo() const {
    return modelo;
}

int VeiculoBase::getAnoFabricacao() const {
    return anoFabricacao;
}

std::string VeiculoBase::getChassi() const {
    return chassi;
}

//metodos da classe Veiculo
Veiculo::Veiculo(std::string _modelo, int _anoFabricacao, std::string _chassi, double _capacidadeCarga, std::string _localizacao) :
    VeiculoBase(_modelo, _anoFabricacao, _chassi), capacidadeCarga(_capacidadeCarga), localizacao(_localizacao) {}

Veiculo::~Veiculo() {}

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
