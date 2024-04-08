#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class VeiculoBase {
protected:
    std::string modelo;
    int anoFabricacao;
    std::string chassi;

public:
    VeiculoBase(std::string _modelo, int _anoFabricacao, std::string _chassi);
    virtual ~VeiculoBase();

    virtual int setModelo(std::string _modelo);
    virtual int setAnoFabricacao(int _anoFabricacao);
    virtual int setChassi(std::string _chassi);

    virtual std::string getModelo() const;
    virtual int getAnoFabricacao() const;
    virtual std::string getChassi() const;
};

class Veiculo : public VeiculoBase {
private:
    double capacidadeCarga;
    std::string localizacao;

public:
    Veiculo(std::string _modelo, int _anoFabricacao, std::string _chassi, double _capacidadeCarga, std::string _localizacao);
    ~Veiculo();

    int setCapacidadeCarga(double _capacidadeCarga);
    int setLocalizacao(std::string _localizacao);

    double getCapacidadeCarga() const;
    std::string getLocalizacao() const;
};

#endif // VEICULO_H
