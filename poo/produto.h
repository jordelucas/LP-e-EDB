#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto {
    public:
        Produto();
        Produto(std::string, float);

        void setNome(std::string);
        std::string getNome();

        void setPreco(float);
        float getPreco();
    
    private:
        std::string nome_;
        float preco_;
};

#endif