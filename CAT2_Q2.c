#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[2][2] = {
        {10, 20},
        {30, 40}
    };

    // Print the elements of the 2D array using nested loops
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}