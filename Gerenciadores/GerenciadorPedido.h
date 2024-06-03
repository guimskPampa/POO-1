#ifndef GERENCIADORPEDIDOS_H
#define GERENCIADORPEDIDOS_H

#include <string>
#include<iostream>
#include <math.h>
#include <fstream>
#include <sstream>


class GerenciadorPedido {

    void setVeiculos();
    double distanciaDoisPontos(std::string localizacao1, std::string localizacao2);
    
};

#endif