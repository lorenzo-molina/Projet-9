#include <stdlib.h>
#include <stdio.h>

void displayGrid(unsigned char tableau[10][10]);

int main(int argc, char** argv)
{
    unsigned char tableau[10][10] = { 0 };

    displayGrid(tableau);
    return 0;
}

void displayGrid(unsigned char tableau[10][10])
{
    int i = 0;
    int y = 0;
    printf("\n-----------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("|");
        for (y = 0; y < 10; y++) {
            printf(" %d |", tableau[i][y]);
        }
        printf("\n-----------------------------------------\n");
    }
}