/* If a five - digit number is input through the keybord
 write a program to calculate the sum of its digits.  */
#include<stdio.h>
int main (){
    int digit ;
    int temp;
    int sum = 0;
    printf("Enter Five Digit : ");
    scanf("%d",&digit);

    do
    {
          temp = digit % 10 ;
          sum += temp ; 
          digit = digit / 10;
    } while (temp != 0);
         printf("Sum Of Five Digit = %d",sum);

         return 0;
}
