/*To reverse a given four-digit integer number and check 
whether it is a palindrome or not. Output the given 
number with suitable message.
*/

#include<stdio.h>

int main(){
    int n,rem,rev;
    printf("Enter number:");
    scanf("%d",&n);
    int temp = n;
    rev=0;

    while(n>0){    // base condition.
        rem=n%10;
        rev=rev*10+rem;    //condition rev = rev*10 +rem.
        n/=10;  //updation.
    }
    if(rev == temp){
        printf("Given no is palindrome.\n");
    }else{
        printf("Given no is not a palindrome.\n");
    }
    return 0;   
}