/*Create a C program to calculate the sum of all elements in a 2D array.*/
#include<stdio.h>
int main() {
    int arr[5][10] = {{11, 25, 12, 64, 69, 25, 37, 94, 49, 73}, {2, 9, 6, 4, 3}};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (j < 2) {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}
