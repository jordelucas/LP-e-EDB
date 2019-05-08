#include <iostream>

#include "produto.h"
#include "item.h"

int main() {
    Produto agua(" Agua", 2);

    Item item(agua, 3);

    std::cout << item.getTotal << "\n";
}