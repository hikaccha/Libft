#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 4)
    {
        if (((argv[2][0] >= 'a' && argv[2][0] <= 'z') || (argv[2][0] >= 'A' && argv[2][0] <= 'Z')) && argv[2][1] == '\0')
            if (((argv[3][0] >= 'a' && argv[3][0] <= 'z') || (argv[3][0] >= 'A' && argv[3][0] <= 'Z')) && argv[3][1] == '\0')
            {
                while (argv[1][i] != '\0')
                {
                    if (argv[1][i] == argv[2][0])
                        argv[1][i] = argv[3][0];
                    write(1, &argv[1][i], 1);
                    i++; 
                }
            }
    }
    write(1, "\n", 1);
    return (0);
}