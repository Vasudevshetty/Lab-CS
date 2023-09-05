/*To read floating-pointing number, separate and displays 
the integral and decimal part of the given.
*/

#include<stdio.h>

int main(){
    float n,x;
    int y;

    printf("Enter n:");
    scanf("%f",&n);

    y=(int)n;
    x=n-y;

    printf("In the given no %.3f,\nIntegral part is %d\tDecimal part is %.3f\n",n,y,x);
    return 0;
}