#include<stdio.h>
//Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

void india();
void french();

int main(){

char n;

printf("Enter the value of n: ");
scanf("%c",&n);

if(n=='i'){
india();
}

else {
french();
}

return 0;
// else{
// printf("hello");
// }
}

void india(){
printf("Namaste!");
}

void french(){
printf("Bonjour!");
}