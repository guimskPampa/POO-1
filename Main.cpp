#include "Veiculo.h"
#include "Cliente.h"
#include "PedidoTransporte.h"

#include <iostream>
#include <string>


int main() {
    // exemplo
    Veiculo veiculo1("VOLVO VM 220", 2020, "9BD111060T5002156", 20000, "Baita Chão - Alegrete");
    Cliente cliente1("Claudio Gomes", "47", "719.349.368-04", "Rua Alvaro Misula, 123", "123456789");
   // PedidoTransporte pedido1(cliente1, "Rodoviário", "Alegrete", "São Gabriel", 5000, 10);

    std::cout << "--Pedido de Transporte--" << std::endl;
    //std::cout << "Cliente: " << pedido1.getCliente().getNome() << std::endl;
    //std::cout << "CPF: " << pedido1.getCliente().getCpf() << std::endl;
    //std::cout << "Tipo de Transporte: " << pedido1.getTipoTransporte() << std::endl;
    //std::cout << "Local de Coleta: " << pedido1.getLocalColeta() << std::endl;
    //std::cout << "Local de Entrega: " << pedido1.getLocalEntrega() << std::endl;
    //std::cout << "Peso da Carga: " << pedido1.getPesoCarga() << " kg" << std::endl;
    //std::cout << "Volume da Carga: " << pedido1.getVolumeCarga() << " m^3" << std::endl;

    return 0;
}
