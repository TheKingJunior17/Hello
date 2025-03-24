// heap.h
#ifndef HEAP_H
#define HEAP_H

#include "data_structures.h"

HEAP *initHeap(int capacity);
void printHeap(HEAP *heap);
void writeHeap(HEAP *heap, const char *filename);
void readHeap(HEAP *heap, const char *filename);
void insertElement(HEAP *heap, double key, int flag);
void extractMin(HEAP *heap, int flag);
void decreaseKey(HEAP *heap, int position, double newKey);

#endif

