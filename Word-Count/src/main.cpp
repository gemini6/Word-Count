// main.cpp

#using <System.dll>

#include "main.h"
#include "initializer.h"

using namespace System;

int main(void) {
    Initializer^ initializer = (gcnew Initializer());
    Console::ReadLine();
    return 0;
}