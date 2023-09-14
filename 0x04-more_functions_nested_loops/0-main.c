#include <stdio.h>  /* Include the standard I/O library for printf */
#include "main.h"    /* Include your project-specific header file if required */

int _isupper(int c); /* Function prototype declaration*/

int main(void)
{
    char c;
    c = 'A';

    if (_isupper(c))
    {
        printf("%c is an uppercase letter.\n", c);
    }
    else
    {
        printf("%c is not an uppercase letter.\n", c);
    }

    c = 'a';

    if (_isupper(c))
    {
        printf("%c is an uppercase letter.\n", c);
    }
    else
    {
        printf("%c is not an uppercase letter.\n", c);
    }

    return (0);
}

