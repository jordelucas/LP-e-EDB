#include <iostream>
#include <cstdlib>
#include <queue>

#include "Cliente.h"
#include "Atendente.h"

int main(int argc, char* argv[]) {
    if(argc < 3) {
        std::cout << "Uso: \n\n";
        std::cout << "argv[0]" << "<quantidade_atendentes> <duracao>\n";
        return 0;
    }

    srand(time(nullptr));
    std::queue<Cliente> fila;

    int qtd_atendentes = 0;
    int duracao = 90;

    Atendente * atendentes = new Atendente[qtd_atendentes];

    int quantidade_clientes = 0;
    float duracao_ociosidade = 0;
    float duracao_atendimento = 0;
    float duracao_espera = 0;

    for(int minuto = 0; minuto < duracao; minuto++) {
        int probabilidade = 1 + (rand() % 10);
        if(probabilidade <= 7) {
            Cliente c;
            c.hora_chegada = minuto;
            c.duracao_atendimento = 2 + (rand() % 7);
            fila.push(c);
            quantidade_clientes++;
        }

        for(int i = 0; i < qtd_atendentes; i++) {
            if(atendentes[i].estaLivre()) {
                if(fila.empty()){
                    duracao_ociosidade++;
                } else {
                    Cliente c = fila.front();
                    atendentes[i].setCliente(c);
                    fila.pop();
                    duracao_atendimento += c.duracao_atendimento;
                    duracao_espera += minuto - c.hora_chegada;
                }
            }
        }
    }

    int quantidade_nao_atendidos = fila.size();
    int quantidade_atendidos = quantidade_clientes - quantidade_nao_atendidos;

    while(fila.empty()) {
        Cliente c = fila.front();
        duracao_espera += duracao - c.hora_chegada;
        fila.pop();
    }

    std::cout << "================================\n";
    std::cout << "Clientes Atendidos: " << quantidade_atendidos << "\n";
    std::cout << "Clientes não atendidos: " << quantidade_nao_atendidos << "\n";
    std::cout << "Tempo médio de espera: " << (duracao_espera / quantidade_clientes) << "\n";
    std::cout << "Tempo médio de ociosidade: " << (duracao_ociosidade / qtd_atendentes) << "\n";
    std::cout << "Tempo médio de atendimento: " << (duracao_atendimento / quantidade_atendidos) << "\n";
    std::cout << "================================\n";

    delete[] atendentes;
    return 0;
}