#ifndef DATABASE_H
#define DATABASE_H

#include "../ClassesBase/Cliente.h"
#include "../ClassesBase/Veiculo.h"
#include "../ClassesBase/PedidoTransporte.h"

#include <string>
#include<iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>


class DataBase {

    private:
        Cliente listaClientes[0];
        Veiculo listaVeiculos[0];
        PedidoTransporte listaPedidoTransporte[0];

    public:

       std::vector<std::string>  getData();
       void instanciarClasses();
};


#endif