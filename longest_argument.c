#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int longLength = 0;
    int index = 0;
    if (argc == 1)
    {
        printf("%s","");
    }
    else
    {
        for(int arg = 1; arg < argc; arg++)
        {
            if(strlen(argv[arg]) > longLength)
            {
                longLength = strlen(argv[arg]);
                index = arg;
            }
        }
        puts(argv[index]);
    }
    
    return EXIT_SUCCESS;
}
