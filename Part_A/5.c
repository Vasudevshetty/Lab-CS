/*To read floating-pointing number and then displays the 
right-most digit of the integral part of the number.*/

#include<stdio.h>

int main(){
    float n;
    int x,y;
    printf("Enter n:");
    scanf("%f",&n);

    x=(int)n;
    y=x%10;

    printf("Right most integral part of the given no is %d\n",y);

    return 0;
}