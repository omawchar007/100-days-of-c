/*Create a program to find the largest and smallest elements in an array of integers.*/
#include <stdio.h>
int main() {
    int arr[10] = {12, 22, 15, 98, 24, 36, 64, 87, 64, 98};
    int smallest = arr[0];
    int largest = arr[0]; 
    
    for (int i = 1; i < 10; i++) { 
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
        if (arr[i] > largest) {
            largest = arr[i]; 
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
}
