#include "produto.h"

Produto::Produto() : nome_(), preco_(0.0f){}

Produto::Produto(std::string nome, float preco) : nome_(nome), preco_(preco) {}

void Produto::setNome(std::string nome){
    nome_ = nome;
}

std::string Produto::getNome(){
    return nome_;
}

void Produto::setPreco(float preco){
    preco_ = preco;
}

float Produto::getPreco(){
    return preco_;
}