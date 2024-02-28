// Write a C program that reads seven integer values 
// from the user and finds the highest value and its position.
#include<stdio.h>

int main() {
    int num[7];
    int temp = 0;
    int position = 0;

    for(int i = 0; i < 7; i++) {
        printf("Enter %d Number Value - ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 7; i++) {
        if(num[i] > temp) {
            temp = num[i];
            position = i + 1;
        }
    }

    printf("Highest Value: %d\n", temp);
    printf("Position: %d\n", position);

    return 0;
}
