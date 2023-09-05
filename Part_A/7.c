/*To determine whether a given number is „Odd‟ or 
„Even‟ and print the message NUMBER IS EVEN or 
NUMBER IS ODD with and without using „else‟
statement.*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n%2==0)
        printf("Given no is even(%d)\n",n);
    else
        printf("Given no is odd(%d)\n",n);

    return 0;
}