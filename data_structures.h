#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

struct ELEMENT {
    double key;
    // Add any other fields if necessary
};

struct HEAP {
    int size;
    int capacity;
    ELEMENT **array;
};

#endif
