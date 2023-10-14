#include<stdio.h>
//Write functions to calculate area of a square, a circle & a rectangle.

int rect(int l, int b);
int squ(int s);
float circle(int r);

int main(){

int l,b,s,r;

printf("Enter the value of l & b: \n");
scanf("%d %d",&l,&b);
printf("Enter the value of s: \n");
scanf("%d",&s);
printf("Enter the value of r: \n");
scanf("%d",&r);

rect(l,b);
squ(s);
circle(r);
}

int rect(int l,int b){
printf("Area of the rectangle is: %d \n",l*b);
}

int squ(int s){
printf("Area of the Square is: %d \n",s*s);
}

float circle(int r){
printf("Area of the Square is: %f \n",2*3.14*r);
}
