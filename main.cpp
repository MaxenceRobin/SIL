#include "silinterpreter.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    SILinterpreter compiler;

    if (argc == 2)
    {
        compiler.execute(argv[1]);
    }

    return 0;
}
