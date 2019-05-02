#include "Atendente.h"

Atendente::Atendente() : livre(true){}

bool Atendente::estaLivre() {
    if(cliente_atual.foiAtendido()) {
        livre = true;
        return true;
    }
    return false;
}

void Atendente::setCliente(const Cliente & cliente) {
    cliente_atual = cliente;
    livre = false;
}
