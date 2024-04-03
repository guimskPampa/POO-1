#include <iostream>
#include <string>

class Veiculo {
private:
    std::string modelo;
    int anoFabricacao;
    std::string chassi;
    double capacidadeCarga;
    std::string localizacao;

public:
    //inicio do construtor
    Veiculo(std::string _modelo, int _anoFabricacao, std::string _chassi, double _capacidadeCarga, std::string _localizacao) :
        modelo(_modelo), anoFabricacao(_anoFabricacao), chassi(_chassi), capacidadeCarga(_capacidadeCarga), localizacao(_localizacao) {}

    // getters e setters
    std::string getModelo() const { return modelo; }
    int getAnoFabricacao() const { return anoFabricacao; }
    std::string getChassi() const { return chassi; }
    double getCapacidadeCarga() const { return capacidadeCarga; }
    std::string getLocalizacao() const { return localizacao; }

    void setLocalizacao(std::string _localizacao) { localizacao = _localizacao; }
};

class Cliente {
private:
    std::string nome;
    std::string idade;
    std::string cpf;
    std::string endereco;
    std::string telefone;

public:
    Cliente(std::string _nome, std::string _idade, std::string _cpf, std::string _endereco, std::string _telefone) :
        nome(_nome), idade(_idade), cpf(_cpf), endereco(_endereco), telefone(_telefone) {}

    std::string getNome() const { return nome; }
    std::string getIdade() const { return idade; }
    std::string getCpf() const { return cpf; }
    std::string getEndereco() const { return endereco; }
    std::string getTelefone() const { return telefone; }
};

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
    PedidoTransporte(Cliente _cliente, std::string _tipoTransporte, std::string _localColeta, std::string _localEntrega, double _pesoCarga, double _volumeCarga, std::string _tipoCarga) :
        cliente(_cliente), tipoTransporte(_tipoTransporte), localColeta(_localColeta), localEntrega(_localEntrega), pesoCarga(_pesoCarga), volumeCarga(_volumeCarga), tipoCarga(_tipoCarga) {}

    Cliente getCliente() const { return cliente; }
    std::string getTipoTransporte() const { return tipoTransporte; }
    std::string getLocalColeta() const { return localColeta; }
    std::string getLocalEntrega() const { return localEntrega; }
    double getPesoCarga() const { return pesoCarga; }
    double getVolumeCarga() const { return volumeCarga; }
    std::string getTipoCarga() const { return tipoCarga; }
};

int main() {
    // exemplo
    Veiculo veiculo1("VOLVO VM 220", 2020, "9BD111060T5002156", 20000, "Baita Chão - Alegrete");
    Cliente cliente1("Claudio Gomes", "47", "719.349.368-04", "Rua Alvaro Misula, 123", "123456789");
    PedidoTransporte pedido1(cliente1, "Rodoviário", "Alegrete", "São Gabriel", 5000, 10);

    std::cout << "--Pedido de Transporte--" << std::endl;
    std::cout << "Cliente: " << pedido1.getCliente().getNome() << std::endl;
    std::cout << "CPF: " << pedido1.getCliente().getCpf() << std::endl;
    std::cout << "Tipo de Transporte: " << pedido1.getTipoTransporte() << std::endl;
    std::cout << "Local de Coleta: " << pedido1.getLocalColeta() << std::endl;
    std::cout << "Local de Entrega: " << pedido1.getLocalEntrega() << std::endl;
    std::cout << "Peso da Carga: " << pedido1.getPesoCarga() << " kg" << std::endl;
    std::cout << "Volume da Carga: " << pedido1.getVolumeCarga() << " m^3" << std::endl;

    return 0;
}
