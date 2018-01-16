#include <stdio.h>

#define CUBESIZE 3

int main(void)
{
    int face, line, cubelet, i;
    for (line = 0; line < CUBESIZE; line++) {
        for (i = 0; i < CUBESIZE; i++)
            putchar(getchar());
        for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
            line == (CUBESIZE-1)/2 && cubelet == (CUBESIZE-1)/2 ? getchar() && putchar(' ') : putchar(getchar());
        putchar(getchar());
    }

    for (line = 0; line < CUBESIZE; line++) {
        for (face = 1; face < 5; face++)
            for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
                line == (CUBESIZE-1)/2 && cubelet == (CUBESIZE-1)/2 ? getchar() && putchar(' ') : putchar(getchar());
        putchar(getchar());
    }

    for (line = 0; line < CUBESIZE; line++) {
        for (i = 0; i < CUBESIZE; i++)
            putchar(getchar());
        for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
            line == (CUBESIZE-1)/2 && cubelet == (CUBESIZE-1)/2 ? getchar() && putchar(' ') : putchar(getchar());
        line < CUBESIZE - 1 ? putchar(getchar()) : getchar();
    }
}
