#ifndef CLIENTE_H
#define CLIENTE_H

struct Cliente {
    int hora_chegada;
    int duracao_atendimento;

    Cliente();
    bool foiAtendido();
};

#endif