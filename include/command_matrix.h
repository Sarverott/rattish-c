#ifndef __RATTISH_COMMAND_READER__
#define __RATTISH_COMMAND_READER__

typedef void (*ratCommand) (); // COMMAND CONTAINER STRUCTURE

void Command_commentaryBlank() {}

ratCommand rattishDictionary[256]; // ALL COMMAND CONTAINER,

void CommandMatrix_resetCommandList();
void CommandMatrix_registCommand(char commandChar, ratCommand commandFunction);
void CommandMatrix_callCommand(char commandChar);

#endif