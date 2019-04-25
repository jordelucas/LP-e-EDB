#include <iostream>

#include "linked_list.h"

int main () {

    LinkedList list;
   list.insert_front(10); 
   list.insert_front(20); 
   list.insert_front(30); 
   list.insert_front(40); 
    
    list.print();
    return 0;
}