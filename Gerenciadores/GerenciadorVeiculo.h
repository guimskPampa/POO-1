#ifndef GERENCIADORVEICULOS_H
#define GERENCIADORVEICULOS_H

#include <vector>
#include <string>

class GerenciadorVeiculos {
private:
    std::vector<Veiculo> veiculosAtivos;

public:
    GerenciadorVeiculos();
    ~GerenciadorVeiculos();

    int adicionarVeiculo(Veiculo veiculo);
    int removerVeiculo(std::string chassi);
    Veiculo* buscarVeiculoPorId(std::string chassi);
    std::vector<Veiculo*> buscarVeiculosPorLocalizacao(std::string localizacao);
    std::vector<Veiculo*> obterVeiculosDisponiveis();
};

#endif // GERENCIADORVEICULOS_H
