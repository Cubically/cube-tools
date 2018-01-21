#include <stdio.h>
#include <stdlib.h>

int *cube, CUBESIZE;

#define CUBE(x,y,z) cube[((x)*CUBESIZE*CUBESIZE) + ((y)*CUBESIZE) + (z)]

void readcube(FILE *in)
{
    int face, line, cubelet, i;
    for (line = 0; line < CUBESIZE; line++) {
        for (i = 0; i < CUBESIZE; i++)
            getc(in);
        for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
            CUBE(0,line,cubelet) = getc(in) - '0';
        getc(in);
    }

    for (line = 0; line < CUBESIZE; line++) {
        for (face = 1; face < 5; face++)
            for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
                CUBE(face,line,cubelet) = getc(in) - '0';
        getc(in);
    }

    for (line = 0; line < CUBESIZE; line++) {
        for (i = 0; i < CUBESIZE; i++)
            getc(in);
        for (cubelet = 0; cubelet < CUBESIZE; cubelet++)
            CUBE(5,line,cubelet) = getc(in) - '0';
        getc(in);
    }
}

int main(void)
{
    CUBESIZE = 3;
    cube = malloc(6 * CUBESIZE * CUBESIZE * sizeof(int));
    readcube(stdin);

    /* edges */

    printf("%c%c ", "ULFRBD"[CUBE(0,2,1)], "ULFRBD"[CUBE(2,0,1)]);  // UF
    printf("%c%c ", "ULFRBD"[CUBE(0,1,2)], "ULFRBD"[CUBE(3,0,1)]);  // UR
    printf("%c%c ", "ULFRBD"[CUBE(0,0,1)], "ULFRBD"[CUBE(4,0,1)]);  // UB
    printf("%c%c ", "ULFRBD"[CUBE(0,1,0)], "ULFRBD"[CUBE(1,0,1)]);  // UL
    printf("%c%c ", "ULFRBD"[CUBE(5,0,1)], "ULFRBD"[CUBE(2,2,1)]);  // DF
    printf("%c%c ", "ULFRBD"[CUBE(5,1,2)], "ULFRBD"[CUBE(3,2,1)]);  // DR
    printf("%c%c ", "ULFRBD"[CUBE(5,2,1)], "ULFRBD"[CUBE(4,2,1)]);  // DB
    printf("%c%c ", "ULFRBD"[CUBE(5,1,0)], "ULFRBD"[CUBE(1,2,1)]);  // DL
    printf("%c%c ", "ULFRBD"[CUBE(2,1,2)], "ULFRBD"[CUBE(3,1,0)]);  // FR
    printf("%c%c ", "ULFRBD"[CUBE(2,1,0)], "ULFRBD"[CUBE(1,1,2)]);  // FL
    printf("%c%c ", "ULFRBD"[CUBE(4,1,0)], "ULFRBD"[CUBE(3,1,2)]);  // BR
    printf("%c%c ", "ULFRBD"[CUBE(4,1,2)], "ULFRBD"[CUBE(1,1,0)]);  // BL

    /* corners */

    printf("%c%c%c ", "ULFRBD"[CUBE(0,2,2)], "ULFRBD"[CUBE(2,0,2)], "ULFRBD"[CUBE(3,0,0)]);  // UFR
    printf("%c%c%c ", "ULFRBD"[CUBE(0,0,2)], "ULFRBD"[CUBE(3,0,2)], "ULFRBD"[CUBE(4,0,0)]);  // URB
    printf("%c%c%c ", "ULFRBD"[CUBE(0,0,0)], "ULFRBD"[CUBE(4,0,2)], "ULFRBD"[CUBE(1,0,0)]);  // UBL
    printf("%c%c%c ", "ULFRBD"[CUBE(0,2,0)], "ULFRBD"[CUBE(1,0,2)], "ULFRBD"[CUBE(2,0,0)]);  // ULF
    printf("%c%c%c ", "ULFRBD"[CUBE(5,0,2)], "ULFRBD"[CUBE(3,2,0)], "ULFRBD"[CUBE(2,2,2)]);  // DRF
    printf("%c%c%c ", "ULFRBD"[CUBE(5,0,0)], "ULFRBD"[CUBE(2,2,0)], "ULFRBD"[CUBE(1,2,2)]);  // DFL
    printf("%c%c%c ", "ULFRBD"[CUBE(5,2,0)], "ULFRBD"[CUBE(1,2,0)], "ULFRBD"[CUBE(4,2,2)]);  // DLB
    printf("%c%c%c ", "ULFRBD"[CUBE(5,2,2)], "ULFRBD"[CUBE(4,2,0)], "ULFRBD"[CUBE(3,2,2)]);  // DBR

    puts("");
    return 0;
}
