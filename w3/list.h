#ifndef LIST_H
#define LIST_H

class List {
    private:
        int* array;
        int capacity;
        int current;
        
    public:
        List();
        
        int getCapacity() const;
};

#endif // LIST_H