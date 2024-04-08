#include "GerenciadorVeiculos.h"

GerenciadorVeiculos::GerenciadorVeiculos() {}

GerenciadorVeiculos::~GerenciadorVeiculos() {}

int GerenciadorVeiculos::adicionarVeiculo(Veiculo veiculo) {
    veiculosAtivos.push_back(veiculo);
    return 1; ///sucesso
}

int GerenciadorVeiculos::removerVeiculo(std::string chassi) {
    for (auto it = veiculosAtivos.begin(); it != veiculosAtivos.end(); ++it) {
        if (it->getChassi() == chassi) {
            veiculosAtivos.erase(it);
            return 1; //sucesso
        }
    }
    return 0; //veiculo não encontrado
}

Veiculo* GerenciadorVeiculos::buscarVeiculoPorId(std::string chassi) {
    for (auto& veiculo : veiculosAtivos) {
        if (veiculo.getChassi() == chassi) {
            return &veiculo;
        }
    }
    return nullptr;                                                                     //valor ponteiro nulo
}

std::vector<Veiculo*> GerenciadorVeiculos::buscarVeiculosPorLocalizacao(std::string localizacao) {
    std::vector<Veiculo*> veiculosEncontrados;
    for (auto& veiculo : veiculosAtivos) {
        if (veiculo.getLocalizacao() == localizacao) {
            veiculosEncontrados.push_back(&veiculo);
        }
    }
    return veiculosEncontrados;
}

std::vector<Veiculo*> GerenciadorVeiculos::obterVeiculosDisponiveis() {
    std::vector<Veiculo*> veiculosDisponiveis;
    for (auto& veiculo : veiculosAtivos) {
        veiculosDisponiveis.push_back(&veiculo);
    }
    return veiculosDisponiveis;
}
