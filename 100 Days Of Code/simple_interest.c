// Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.

#include<stdio.h> 

void SimpleI(int principle , int time , float rate ){

    float si;

     printf("Enter Principle Value - ");
     scanf("%d",&principle);

     printf("Enter Intrest Rate - ");
     scanf("%f",&rate);

     printf("Enter The Time - ");
     scanf("%d",&time);

    si = (principle * rate * time ) / 100 ;

    printf("The Simple Intrest Is - %f",si);

}

int main() {

    int principle;
    float rate ;
    int time ;

    SimpleI(principle , time , rate );


    return 0;
}
