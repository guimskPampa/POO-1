#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {
private:
    double capacidadeCarga;
    std::string localizacao;

    std::string modelo;
    int anoFabricacao;
    std::string chassi;

public:

    Veiculo(std::string _modelo, int _anoFabricacao, std::string _chassi, double _capacidadeCarga, std::string _localizacao);
    ~Veiculo();

    virtual int setModelo(std::string _modelo);
    virtual int setAnoFabricacao(int _anoFabricacao);
    virtual int setChassi(std::string _chassi);
    int setCapacidadeCarga(double _capacidadeCarga);
    int setLocalizacao(std::string _localizacao);
    
    virtual std::string getModelo() const;
    virtual int getAnoFabricacao() const;
    virtual std::string getChassi() const;
    double getCapacidadeCarga() const;
    std::string getLocalizacao() const;
};

#endif // VEICULO_H
