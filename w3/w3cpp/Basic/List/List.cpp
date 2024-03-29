#include <iostream>
#include <cstdlib>
#include "List.h"

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
    array = (int*)malloc(capacity*sizeof(int));
    
    if ( array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    if ( current == 0 ) {
        throw ZeroLenException();
    }
    
    if ( current > index && index >= 0 ) {
        current -=1;
        
        for ( int i = index; i < current; i++ ) {
            array[i] = array[i+1];
        }
    }
}

void List::insert(int value, int index) {
    if ( current > index && index >= 0 ) {
        push_back(value);
        
        for ( int i = current-1; i > index; i-- ) {
            array[i] = array[i-1];
        }
        array[index] = value;
    }
}

int List::find(int value) const {
    for ( int i = 0; i < current; i++ ) {
        if ( array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) {
    int newCurrent = current + 1;
    
    if ( newCurrent > capacity ) {
        int newCapacity = capacity * multiplier;
        int* newArray = (int*)realloc(array, newCapacity*sizeof(int));
        
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        
        capacity = newCapacity;
        array = newArray;
    }
    array[current] = value;
    current = newCurrent;
}

int List::pop_back() {
    if ( current == 0 ) {
        throw ZeroLenException();
    }
    current -= 1;
    return array[current];
}

void List::sort() {
    for ( int i = 1; i < current; i++ ) {
        int j = i;
        int temp = array[i];
        
        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}

int List::operator[](int index) const {
    return array[index];
}

bool List::operator==(const List& other) const {
    if ( this->current != other.current ) {
        return false;
    }
    
    for ( int i = 0; i < this->current; i++ ) {
        if ( this->array[i] != other.array[i] ) {
            return false;
        }
    }
    
    return true;
}

bool List::operator!=(const List& other) const {
    if ( this->current != other.current ) {
        return true;
    }
    
    for ( int i = 0; i < this->current; i++ ) {
        if ( this->array[i] != other.array[i] ) {
            return true;
        }
    }
    
    return false;
}

std::ostream& operator<<(std::ostream& out, const List& list) {
    int last = list.size() - 1;
    
    for ( int i = 0; i < last; i++ ) {
        out << list[i] << ' ';
    }
    out << list[last];
    return out;
}