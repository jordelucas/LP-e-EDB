#ifndef QUEUE_H
#define QUEUE_H

#include "vector.h"

struct queue {
    queue(int capacity);

    vector data;

    void clear();
    bool empty();
    void push_back(int elemento);
    int pop_front();
    int peek();
    int size();
};

#endif