#include<stdio.h>
//add 2 numbers using functions

int sum(int a, int b);

int main(){

int a; int b;

printf("Enter the value of a & b: \n");
scanf("%d",&a);
scanf("%d",&b);

int s=sum(a,b);

printf("sum value is : %d \n", s);
}

int sum(int a, int b){

int sum=a+b;
return sum;
}