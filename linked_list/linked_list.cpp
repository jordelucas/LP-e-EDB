#include <iostream>
#include "linked_list.h"

Node::Node() : next(nullptr){}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList() {
    Node* current = head;

    while (current != nullptr) {
        Node * temp = current;
        delete current;    
        current = temp;
    }
    
}

void LinkedList::insert_front(float info) {
    Node * new_node = new Node();
    new_node->info = info;

    new_node->next = head;
    head = new_node;
}

void LinkedList::print() {
    for (Node* node = head; node != nullptr; node = node->next) {
        std::cout << node->info << "\n";
    }
}
