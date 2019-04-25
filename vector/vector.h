struct vector {
    vector(int initial_quantity);
    ~vector();

    int * values;
    int quantity;
    int array_size;

    int at(int index);
    void set(int index, int valor);
    void insert(int index, int valor);
    int erase(int index);
    int size();
    bool empty();
};