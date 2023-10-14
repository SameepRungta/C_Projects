#include<stdio.h>
//Print all the odd numbers from 5 to 50.
int main(){

int n=5;



for(int i=5;i<=50;i++){

    if(i%2==0){
        continue;
    }

        printf("%d \n",i);

}

}