#include <iostream>
#include "linked_list.h"

Node::Node() : next(nullptr){}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;

    while (current != nullptr) {
        Node * temp = current;
        delete current;    
        current = temp;
    }
    
}

Node* LinkedList::insert_back(int info){
    Node * new_node = new Node();
    new_node->info = info;
    new_node->next = nullptr;

    if(head == nullptr) {
        head = new_node;
        return new_node;
    }

    Node * current = head;

    while(current->next != nullptr) {
        current = current->next;
    }

    current->next = new_node;

    return new_node;
}

Node* LinkedList::insert_front(int info) {
    Node * new_node = new Node();
    new_node->info = info;

    new_node->next = head;
    head = new_node;

    return new_node;
}

bool LinkedList::is_empty(){
    return head == nullptr;
}

unsigned int LinkedList::length(){
    int qtty = 0;
    Node * current = head;

    while(current->next != nullptr) {
        current = current->next;
        qtty++;
    }

    return qtty;
}

Node* LinkedList::search(int value){
    Node * current = head;

    while(current->next != nullptr && current->info != value) {
        current = current->next;
    }    

    return current;
}

void LinkedList::remove(int value){
    Node* previous = nullptr;
    Node* current = head;
    
    while (current != nullptr && current->info != value) {
        previous = current;
        current = current->next;
    }

    if (!previous) {
        Node* temp = head;
        head = current->next;
        delete temp;
    } else {
        previous->next = current->next;
        delete current;
    }
}

void LinkedList::print() {
    for (Node* node = head; node != nullptr; node = node->next) {
        std::cout << node->info << "\n";
    }
}
