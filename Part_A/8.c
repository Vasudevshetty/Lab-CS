/*Using „&‟ operator, check whether a given number is 
Odd or Even.*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    (n&1==1)?printf("Given no is odd(%d)\n",n):printf("Given no is even(%d)\n",n);

    return 0;
}