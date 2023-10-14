#include<stdio.h>
//Print all numbers from 1 to 10 except for 6.
int main(){

int n;

printf("Enter the value of n: ");
scanf("%d",&n);

for(int i=1;i<=10;i++){

    if(i==6){
        continue;
    }

        printf("%d \n",i);

}

}