#ifndef PEDIDOTRANSPORTE_H
#define PEDIDOTRANSPORTE_H

#include "Cliente.h"
#include <string>
#include<iostream>


class PedidoTransporte : private Cliente{
private:
    Cliente cliente;
    std::string tipoTransporte;
    std::string localColeta;
    std::string localEntrega;
    double pesoCarga;
    double volumeCarga;
    std::string prioridade;

public:
    //construtor
    PedidoTransporte(Cliente _cliente, std::string _tipoTransporte, std::string _localColeta, std::string _localEntrega, double _pesoCarga, double _volumeCarga, std::string _tipoCarga);
    //destrutor
    ~PedidoTransporte();

    //sets
    int setTipoTransporte(std::string _tipoTransporte);
    int setLocalColeta(std::string _localColeta);
    int setLocalEntrega(std::string _localEntrega);
    int setPesoCarga(double _pesoCarga);
    int setVolumeCarga(double _volumeCarga);
    int setPrioridade(std::string _prioridade);

    //gets
    Cliente getCliente() const;
    std::string getTipoTransporte() const;
    std::string getLocalColeta() const;
    std::string getLocalEntrega() const;
    double getPesoCarga() const;
    double getVolumeCarga() const;
    std::string getPrioridade() const;

    //sobrecargas ==
    bool operator==(const PedidoTransporte & comparadoCliente) const;
    bool operator==(const PedidoTransporte & comparadoTipoTransporte) const;
    bool operator==(const PedidoTransporte & comparadoLocalColeta) const;
    bool operator==(const PedidoTransporte & comparadoLocalEntrega) const;
    bool operator==(const PedidoTransporte & comparadoPesoCarga) const;
    bool operator==(const PedidoTransporte & comparadoVolumeCarga) const;
    bool operator==(const PedidoTransporte & comparadoPrioridade) const;

    //sobrecargas <<
    std::ostream& operator<<(std::ostream& out);


};

#endif // PEDIDOTRANSPORTE_H
