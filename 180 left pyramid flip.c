
// C program to print the 180 left pyramid pattern of stars
#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 *i; j++)//change here
        {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k <rows-i; k++)// change here
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
