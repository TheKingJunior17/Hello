// util.h
#ifndef UTIL_H
#define UTIL_H

#include "heap.h"
#include <string>

bool isValidExecution(int argc, char *argv[]);
void printUsageMessage();
void handleInstruction(const std::string &instruction, HEAP *heap, int flag);

#endif
