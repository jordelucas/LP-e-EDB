#include "Cliente.h"

Cliente::Cliente() : hora_chegada(0), duracao_atendimento(0){}

bool Cliente::foiAtendido() {
    return duracao_atendimento-- < 0;
}