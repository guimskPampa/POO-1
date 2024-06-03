#ifndef GERENCIADORPEDIDOS_H
#define GERENCIADORPEDIDOS_H

#include <string>
#include<iostream>
#include <math.h>
#include <fstream>
#include <sstream>
#include <cstring>
#include "../ClassesBase/PedidoTransporte.h" 
#include "../ClassesBase/Veiculo.h" 


class GerenciadorPedido {

    PedidoTransporte* setVeiculos(PedidoTransporte* pedido, Veiculo* listaVeiculos);
    double distanciaDoisPontos(std::string localizacao1, std::string localizacao2);
    
};

#endif