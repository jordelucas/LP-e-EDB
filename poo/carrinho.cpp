#include "carrinho.h"

void Carrinho::limpar(){
    itens_.clear();
}

void Carrinho::adicionarItem(Produto produto, unsigned int quantidade){
    Item item(produto, quantidade);
    adicionarItem(item);
}

void Carrinho::adicionarItem(Item item){
    itens_.push_back(item);
}

void Carrinho::removerItem(Item){
    
}

std::vector<Item>& Carrinho::getItens(){
    return itens_;
}

float Carrinho::getTotal(){
    float total = 0.0f;
    for(size_t i = 0; i < itens_.size(); ++i){
        total += itens_[i].getTotal();
    }

    return total;
}
