/*Using „ternary‟ operator, check whether a given 
number is Positive or Negative.
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    (n>0)?printf("No is positive(+)(%d)\n",n):printf("No is negitive(-)(%d)\n",n);

    return 0;
}