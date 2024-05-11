#ifndef PEDIDO_TRANSPORTE_CPP
#define PEDIDO_TRANSPORTE_CPP

#include "PedidoTransporte.h"

PedidoTransporte::PedidoTransporte(Cliente _cliente, std::string _tipoTransporte, std::string _localColeta, std::string _localEntrega, double _pesoCarga, double _volumeCarga, std::string _tipoCarga) :
    cliente(_cliente), tipoTransporte(_tipoTransporte), localColeta(_localColeta), localEntrega(_localEntrega), pesoCarga(_pesoCarga), volumeCarga(_volumeCarga), tipoCarga(_tipoCarga) {}

PedidoTransporte::~PedidoTransporte() {}

int PedidoTransporte::setTipoTransporte(std::string _tipoTransporte) {
    if (!_tipoTransporte.empty()) {
        tipoTransporte = _tipoTransporte;
        return 1;
    }
    return 0;
}

int PedidoTransporte::setLocalColeta(std::string _localColeta) {
    if (!_localColeta.empty()) {
        localColeta = _localColeta;
        return 1;
    }
    return 0;
}

int PedidoTransporte::setLocalEntrega(std::string _localEntrega) {
    if (!_localEntrega.empty()) {
        localEntrega = _localEntrega;
        return 1;
    }
    return 0;
}

int PedidoTransporte::setPesoCarga(double _pesoCarga) {
    if (_pesoCarga > 0) {
        pesoCarga = _pesoCarga;
        return 1;
    }
    return 0;
}

int PedidoTransporte::setVolumeCarga(double _volumeCarga) {
    if (_volumeCarga > 0) {
        volumeCarga = _volumeCarga;
        return 1;
    }
    return 0;
}

int PedidoTransporte::setTipoCarga(std::string _tipoCarga) {
    if (!_tipoCarga.empty()) {
        tipoCarga = _tipoCarga;
        return 1;
    }
    return 0;
}

Cliente PedidoTransporte::getCliente() const {
    return cliente;
}

std::string PedidoTransporte::getTipoTransporte() const {
    return tipoTransporte;
}

std::string PedidoTransporte::getLocalColeta() const {
    return localColeta;
}

std::string PedidoTransporte::getLocalEntrega() const {
    return localEntrega;
}

double PedidoTransporte::getPesoCarga() const {
    return pesoCarga;
}

double PedidoTransporte::getVolumeCarga() const {
    return volumeCarga;
}

std::string PedidoTransporte::getTipoCarga() const {
    return tipoCarga;
}
#endif