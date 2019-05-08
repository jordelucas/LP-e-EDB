#include "item.h"

Item::Item(Produto produto, unsigned int quantidade) : produto_(produto), quantidade_(quantidade) {}

void Item::setProduto(Produto produto){
    produto_ = produto;
}

Produto Item::getProduto(){
    return produto_;
}

void Item::setQuantidade(unsigned int quantidade){

    if(quantidade == 0) {
        quantidade = 1;
    }
    
    quantidade_ = quantidade;
}

unsigned int Item::getQuantidade(){
    return quantidade_;
}

float Item::getTotal(){
    return produto_.getPreco() * quantidade_;
}

void Item::aumentarQuantidade(){
    quantidade_++;
}

void Item::diminuirQuantidade(){
    if(quantidade_ == 1) {
        return;
    }

    quantidade_--;
}