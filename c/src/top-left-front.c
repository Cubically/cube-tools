#include <stdio.h>

#define CUBESIZE 3

int main(void)
{
    int i, j;
    for (i = 0; i < CUBESIZE; i++) {
        for (j = 0; j < CUBESIZE; j++)
            getchar();
        for (j = 0; j < CUBESIZE; j++)
            putchar(getchar());
        getchar();
    }

    putchar('\n');

    int front[CUBESIZE * CUBESIZE] = {0};

    i = j = 0;
    int loop = CUBESIZE;
    while (loop--)
    {
        for (j = 0; j < CUBESIZE; j++)
            putchar(getchar());

        for (j = 0; j < CUBESIZE; j++)
            front[i++] = getchar();

        for (j = 0; j < CUBESIZE; j++)
            getchar();

        for (j = 0; j < CUBESIZE; j++)
            getchar();

        getchar();
    }

    putchar('\n');

    for (i = 0; i < CUBESIZE * CUBESIZE; i++)
        putchar(front[i]);

    return 0;
}
