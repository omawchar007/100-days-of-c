// Calculate the greatest common divisor (GCD) and least common multiple (LCM) of two numbers
#include<stdio.h>

int findGCD(int a , int b){
    if(b == 0){
        return a;
    }
    return findGCD(b, a % b);
}
int findLCM(int a , int b){
    int gcd = findGCD(a, b);
    return (a*b) / gcd ;
}
int main(){
    int num1 , num2;
    

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    int gcd = findGCD(num1 , num2);
    int lcm = findLCM(num1 , num2);

    printf("GCD of %d and %d is : %d\n", num1 , num2 , gcd);
    printf("LCM of %d and %d is : %d\n", num1 , num2 , lcm);


    return 0;
}
