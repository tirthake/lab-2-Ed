#include <stdio.h>
int main() {
    int row, column;

    // Height and width of the letter "T"
    int height = 5;  // Number of rows
    int width = 5;   // Number of columns

    for (row = 1; row <= height; row++) {
        for (column = 1; column <= width; column++) {
            // Print stars for the top row (horizontal line)
            if (row == 1) {
                printf("*");
            }
            // Print stars for the middle column (vertical line)
            else if (column == (width / 2) + 1) {
                printf("*");
            }
            // Print spaces for other positions
            else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
