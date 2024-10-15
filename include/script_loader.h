#ifndef __RATTISH_FILE_LOADER__
#define __RATTISH_FILE_LOADER__

#include <stdio.h>
#include <stdbool.h>

#include "_config.h"

FILE *scriptFile;
bool toNextLine=false;
char lastCommand=0;
char lastArgumentChain[VARIABLE_SIZE];
void ScriptLoader_loadScript();
void ScriptLoader_readCommand();
void ScriptLoader_readArgumentChain();
void ScriptLoader_closeScript();

#endif