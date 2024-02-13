//Write a C program to check if a given number is Armstrong or not.
#include <stdio.h>
    #include <math.h>
    
    int countDigits(int num) {
        int count = 0;
        while (num != 0) {
            count++;
            num /= 10;
        }
        return count;
    }
    
    
    int isArmstrong(int num) {
        int originalNum, remainder, result = 0, n = 0;
    
        
        originalNum = num;
    
        
        n = countDigits(num);
    
       
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
    
        if (result == num)
            return 1; 
        else
            return 0; 
    }
    
    int main() {
        int num;
    
        printf("Enter a number: ");
        scanf("%d", &num);
    
        if (isArmstrong(num))
            printf("%d is an Armstrong number.\n", num);
        else
            printf("%d is not an Armstrong number.\n", num);
    
        return 0;
    }
    
