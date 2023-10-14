#include<stdio.h>
//Keep taking numbers as input from user until user enters an odd number.
int main(){

int n;

do{
printf("Enter the value of n: ");
scanf("%d",&n);

if(n%2!=0){
    printf("end");
    break;
}

}

while(1);

}