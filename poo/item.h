#ifndef ITEM_H
#define ITEM_H

#include "produto.h"

class Item {
    public:
        Item(Produto, unsigned int);
        void setProduto(Produto);
        Produto getProduto();

        void setQuantidade(unsigned int);
        unsigned int getQuantidade();

        float getTotal();
        void aumentarQuantidade();
        void diminuirQuantidade();

    private: 
        Produto produto_;
        unsigned int quantidade_;
};

#endif