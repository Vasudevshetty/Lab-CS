/*Using „ternary‟ operator, find the largest of three 
numbers.*/

#include<stdio.h>

int main(){
    int a,b,c,big;

    printf("Enter a, b & c:");
    scanf("%d %d %d",&a,&b,&c);

    big=(a>b)?(a>c)?a:b:(b>c)?b:c;

    printf("Largest of three no is %d\n",big);

    return 0;
}