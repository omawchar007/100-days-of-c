// Find the Armstrong numbers using c program
#include<stdio.h>
#include<math.h>

int isArmstrong(int num){
    int originalNum, remainder, n = 0, result = 0 ;

    originalNum = num ;

    while(originalNum != 0){
        originalNum /= 10;
        ++n;
    }

    originalNum = num ;

    while(originalNum != 0){
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if(result == num){
        return 1;
    } else {
        return 0;
    }
}

int main(){
     int num;
     printf("Enter the upper limit: ");
     scanf("%d", &num);

     printf("Armstrong numbers between 1 and %d are:\n", num);
     for(int i = 1; i <= num ; i++){
        if(isArmstrong(i)){
            printf("%d\n", i);
        }
     }

    return 0;
}
