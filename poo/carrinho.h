#ifndef CARRINHO_H
#define CARRINHO_H

#include <vector>

#include "item.h"

class Carrinho {
    public:
        void limpar();
        void adicionarItem(Produto, unsigned int);
        void adicionarItem(Item);
        void removerItem(Item);
        std::vector<Item>& getItens();
        float getTotal(); 

    private:
        std::vector<Item> itens_;
};

#endif