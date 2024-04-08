#ifndef PEDIDOTRANSPORTE_H
#define PEDIDOTRANSPORTE_H

#include "Cliente.h"
#include <string>

class PedidoTransporte {
private:
    Cliente cliente;
    std::string tipoTransporte;
    std::string localColeta;
    std::string localEntrega;
    double pesoCarga;
    double volumeCarga;
    std::string tipoCarga;

public:
    PedidoTransporte(Cliente _cliente, std::string _tipoTransporte, std::string _localColeta, std::string _localEntrega, double _pesoCarga, double _volumeCarga, std::string _tipoCarga);
    ~PedidoTransporte();

    int setTipoTransporte(std::string _tipoTransporte);
    int setLocalColeta(std::string _localColeta);
    int setLocalEntrega(std::string _localEntrega);
    int setPesoCarga(double _pesoCarga);
    int setVolumeCarga(double _volumeCarga);
    int setTipoCarga(std::string _tipoCarga);

    Cliente getCliente() const;
    std::string getTipoTransporte() const;
    std::string getLocalColeta() const;
    std::string getLocalEntrega() const;
    double getPesoCarga() const;
    double getVolumeCarga() const;
    std::string getTipoCarga() const;
};

#endif // PEDIDOTRANSPORTE_H
