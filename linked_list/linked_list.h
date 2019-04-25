#ifndef LINKED_LIST
#define LINKED_LIST

struct Node {
    Node();

    int info;
    Node* next;
};

struct LinkedList {
    LinkedList();
    ~LinkedList();

    Node* head;
    
    Node* insert_back(int info);
    Node* insert_front(int info);
    bool is_empty();
    unsigned int length();
    Node* search(int value);
    void remove(int value);
    void print();
};

#endif