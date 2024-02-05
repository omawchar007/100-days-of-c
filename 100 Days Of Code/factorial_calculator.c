/*Calculate the factorial of a given number.*/
#include<stdio.h>
int factorial(int n){
      if (n == 1 || n == 0)
      {
            return 1;
      }else{
             return n * factorial(n - 1);
      }
}
int main (){
      int number;

      printf("Enter The Number To Calculate Factorial: ");
      if (scanf("%d", &number) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1; 
      }
      if (number < 0)
      {
            printf("Factorial not calculated for negative number\n");
      } else {
            printf("%d Factorial is = %d\n", number, factorial(number));
      }
      return 0;
}
