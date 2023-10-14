#include<stdio.h>
//Tables using functions

int table(int a);

int main(){

int a; 
int t;
printf("Enter the value of a: ");
scanf("%d",&a);
t=table(a);
}

int table(int a){

for(int i = 1;i<=10;i++){

    int tab=a*i;
    printf("%d \n",tab);
}

}