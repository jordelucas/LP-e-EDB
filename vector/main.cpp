#include <iostream>
#include "vector.h"

int main() {
    vector v(10);
    
    for (int i = 0; i < 10; i++) {
        v.insert(i,i);
    }

    for (int i = 0; i < 5; i++) {
        v.erase(0);
    }

    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << "\n";
    }

    v.~vector();
    return 00;
}