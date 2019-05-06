#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* pointer;
    int capacity;
    int size;
} List;

void init(List* list) {
    int size = 10;

    list->size = 0;
    list->pointer = (int*)malloc(sizeof(int)*size);
    if ( list->pointer == NULL ) {
        printf("Memory allocation error!\n");
        list->capacity=0;
        return;
    }
    list->capacity = size;
}

void print(List* list) {
    if ( list->size == 0 ) {
        printf("STDOUT error: list empty!\n");
        return;
    }

    int last = list->size - 1;
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", list->pointer[i]);
    }
    printf("%d\n", list->pointer[last]);
}

void append(List* list, int value) {
    int size = list->size + 1;

    if ( size == list->capacity ) {
        int capacity = list->capacity + list->capacity / 5;
        int* pointer = list->pointer;

        list->pointer = (int*)realloc(list->pointer, sizeof(int)*capacity);

        if ( list->pointer == NULL ) {
            printf("Memory reallocation error!\n");
            list->pointer = pointer;
            return;
        }

        list->capacity = capacity;
    }

    list->pointer[list->size] = value;
    list->size = size;
}

int pop(List* list) {
    if ( list->size == 0 ) {
        printf("Value error: can not pop out from empty list!\n");
        return -1;
    }
    list->size -= 1;
    return list->pointer[list->size];
}

void flush(List* list) {
    int capacity = list->size + 1;
    int* pointer = list->pointer;

    list->pointer = (int*)realloc(list->pointer, sizeof(int)*capacity);
    if ( list->pointer == NULL ) {
        printf("Flush error: can not reallocate memory!\n");
        list->pointer = pointer;
        return;
    }
    list->capacity = capacity;
}

void release(List* list) {
    free(list->pointer);
    list->capacity = 0;
    list->size = 0;
}

void trace(List* list) {
    printf("List: %p, %d/%d\n", list->pointer, list->size, list->capacity);
}

int main() {
    List list;

    init(&list);

    for ( int i = 1; i <= 20; i++ ) {
        append(&list, i);
    }
    trace(&list);
    print(&list);

    for ( int i = 0; i < 10; i++ ) {
        pop(&list);
    }
    trace(&list);
    print(&list);

    flush(&list);

    trace(&list);
    print(&list);

    release(&list);

    return 0;
}