#ifndef LINKED_LIST
#define LINKED_LIST

struct Node {
    Node();

    float info;
    Node* next;
};

struct LinkedList {
    LinkedList();
    ~LinkedList();

    Node* head;
    void insert_front(float info);
    void print();
};

#endif