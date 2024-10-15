#include "command_matrix.h"

void CommandMatrix_resetCommandList()
{ // SET AS DEFAULT ALL POSSIBLE COMMANDS TO COMMENT, to avoid unwanted errors
    for (short int i = 0; i < 256; i++)
    {
        rattishDictionary[i] = Command_commentaryBlank;
    }
}
void CommandMatrix_registCommand(char commandChar, ratCommand commandFunction)
{
    rattishDictionary[commandChar] = commandFunction;
}
void CommandMatrix_callCommand(char commandChar)
{
    rattishDictionary[commandChar]();
}
