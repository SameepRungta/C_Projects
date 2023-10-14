#include<stdio.h>
//Keep taking numbers as input from user until user enters a number which is multiple of 7.
int main(){

int n;

do{
printf("Enter the value of n: ");
scanf("%d",&n);

if(n%7==0){
    printf("end");
    break;
}

}

while(1);

}