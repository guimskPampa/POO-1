#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Veiculo {
private:
    string modelo;
    int anoFabricacao;
    string chassi;
    double capacidadeCarga;
    string localizacao;

public:
    // Construtor
    Veiculo(string _modelo, int _anoFabricacao, string _chassi, double _capacidadeCarga, string _localizacao) :
        modelo(_modelo), anoFabricacao(_anoFabricacao), chassi(_chassi), capacidadeCarga(_capacidadeCarga), localizacao(_localizacao) {}

    // Métodos Getters e Setters
    string getModelo() const { return modelo; }
    int getAnoFabricacao() const { return anoFabricacao; }
    string getChassi() const { return chassi; }
    double getCapacidadeCarga() const { return capacidadeCarga; }
    string getLocalizacao() const { return localizacao; }

    void setLocalizacao(string _localizacao) { localizacao = _localizacao; }
};

class Cliente {
private:
    string nome;
    string endereco;
    string telefone;

public:
    // Construtor
    Cliente(string _nome, string _endereco, string _telefone) :
        nome(_nome), endereco(_endereco), telefone(_telefone) {}

    // Métodos Getters
    string getNome() const { return nome; }
    string getEndereco() const { return endereco; }
    string getTelefone() const { return telefone; }
};

class PedidoTransporte {
private:
    Cliente cliente;
    string tipoTransporte;
    string localColeta;
    string localEntrega;
    double pesoCarga;
    double volumeCarga;

public:
    // Construtor
    PedidoTransporte(Cliente _cliente, string _tipoTransporte, string _localColeta, string _localEntrega, double _pesoCarga, double _volumeCarga) :
        cliente(_cliente), tipoTransporte(_tipoTransporte), localColeta(_localColeta), localEntrega(_localEntrega), pesoCarga(_pesoCarga), volumeCarga(_volumeCarga) {}

    // Métodos Getters
    Cliente getCliente() const { return cliente; }
    string getTipoTransporte() const { return tipoTransporte; }
    string getLocalColeta() const { return localColeta; }
    string getLocalEntrega() const { return localEntrega; }
    double getPesoCarga() const { return pesoCarga; }
    double getVolumeCarga() const { return volumeCarga; }
};

int main() {
    // Exemplo de utilização das classes
    Veiculo veiculo1("VOLVO VM 220", 2020, "9BD111060T5002156", 20000, "Baita Chão - Alegrete");
    Cliente cliente1("Claudio Gomes", "Rua Alvaro Misula, 123", "123456789");
    PedidoTransporte pedido1(cliente1, "Rodoviário", "Alegrete", "São Gabriel", 5000, 10);

    // Acessando informações do pedido de transporte
    cout << "--Pedido de Transporte--" << endl;
    cout << "Cliente: " << pedido1.getCliente().getNome() << endl;
    cout << "Tipo de Transporte: " << pedido1.getTipoTransporte() << endl;
    cout << "Local de Coleta: " << pedido1.getLocalColeta() << endl;
    cout << "Local de Entrega: " << pedido1.getLocalEntrega() << endl;
    cout << "Peso da Carga: " << pedido1.getPesoCarga() << " kg" << endl;
    cout << "Volume da Carga: " << pedido1.getVolumeCarga() << " m^3" << endl;

    return 0;
}
