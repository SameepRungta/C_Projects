#include<stdio.h>
//PPrint the factorial of a number n.
int main(){
int n;
int sum=1;
printf("Enter the value of n: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){

sum=sum*i;
printf("%d X",i);
}

printf(" = %d", sum);

}