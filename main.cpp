#include "silinterpreter.h"

#include <iostream>

int main(int argc, char* argv[])
{
    SILinterpreter compiler;

    if (argc == 2)
    {
        try
        {
            compiler.execute(argv[1]);
        }
        catch (int e)
        {
            std::cout << "Une erreur est survenue..." << std::endl;
            getchar();
        }

    }

    return 0;
}
