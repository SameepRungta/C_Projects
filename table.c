#include<stdio.h>
//Print the table of a no. input by the user.
int main(){

int n, tab=0;

printf("Enter the value of n: ");
scanf("%d",&n);

for(int i = 0;i<=10;i++){

    tab=n*i;
    printf("%d X %d = %d \n",n,i,tab);
}

}