#ifndef ATENDENTE_H
#define ATENDENTE_H

#include "Cliente.h"

struct Atendente {
    bool livre;
    Cliente cliente_atual;

    Atendente();
    bool estaLivre();
    void setCliente(const Cliente & cliente);
};

#endif