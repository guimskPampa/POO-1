#include "GerenciadorPedido.h"

double GerenciadorPedido::distanciaDoisPontos(std::string localizacao1, std::string localizacao2){
    // std::stringstream ss(localizacao1);
    // std::stringstream ss(localizacao2);
    // double longitude1, longitude2, latitude1, latitude2;
    // double numero, count;
    
    // while (ss >> numero) {
    //     if (count==0) longitude1 = getline(ss, longitude1, ',');
    //     else if (count==1) longitude1 = getline(ss, longitude1, ',');
    //     count++;
    // }
    
    // while (ss >> numero) {
    //     if (count==0) longitude2 = stoi(strtok(longitude2,','));
    //     else if (count==1) longitude2 = getline(ss, longitude2, ',');
    //     count++;
    // }

    // longitude1 = getline(ss, longitude1, ',')
    // double diferenca = longitude1 - longitude2;
    // double angulo1 = latitude1 * (M_PI/180);
    // double angulo2 = latitude2 * (M_PI/180);
    // double angulo3 = diferenca * (M_PI/180);

    // double distance = 60 * 1.1515 * (180/M_PI) * acos(sin(angulo1) * sin(angulo2) +  cos(angulo1) * cos(angulo2) * cos(angulo3));
   
    // return round(distance * 1.609344);
}

PedidoTransporte* GerenciadorPedido::setVeiculos(PedidoTransporte* pedido, Veiculo* listaVeiculos){

}