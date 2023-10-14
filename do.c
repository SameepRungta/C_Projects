#include<stdio.h>
//print n numbers using do while loop
int main(){

int a=0,n;

printf("Enter the value: ");
scanf("%d",&n);

do
{
printf("%d \n",a);
a++;
}
while(a<=n);

return 0;
}

// int main() {
// int i=0;
// do {
// printf("%d\n", i); i++;
// } 
// while(i<=5);
// return 0;}