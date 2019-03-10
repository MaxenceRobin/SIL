#include "silinterpreter.h"

#include <iostream>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
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
