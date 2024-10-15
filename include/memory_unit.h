#ifndef __RATTISH_MEMORY_UNIT__
#define __RATTISH_MEMORY_UNIT__

#include <stdio.h>
#include <stdbool.h>

#include "_config.h"

struct VariableCell{
    bool isSet;
    //char name[VARNAME_LENGTH];
    char value[VARIABLE_SIZE];
};

struct VariableCell variablesSet[MEMORY_LENGTH];

int contextPointer = 0;

void MemoryUnit_setContext();
void MemoryUnit_getContext();
void MemoryUnit_pointContext();
void MemoryUnit_moveContextLeft();
void MemoryUnit_moveContextRight();
void MemoryUnit_clearVarset();

#endif