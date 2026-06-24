#include <stdio.h>

int main() {
    int arr[2][2]; // A 2x2 matrix (rows 0-1, columns 0-1)
    int i, j;

    printf("Enter the array elements:\n");
    for(i = 0; i < 2; i++) {       // Rows: 0 to 1
        for(j = 0; j < 2; j++) {   // Columns: 0 to 1
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nShow the array elements:\n");
    for(i = 0; i < 2; i++) {       // Rows: 0 to 1
        for(j = 0; j < 2; j++) {   // Columns: 0 to 1
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Prints a new line after each row for grid formatting
    }

    return 0;
}
