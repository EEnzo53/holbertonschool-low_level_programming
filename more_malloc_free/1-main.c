#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s;

    s = string_nconcat("Hello", "World", 3);

    printf("%s\n", s);

    return (0);
}
