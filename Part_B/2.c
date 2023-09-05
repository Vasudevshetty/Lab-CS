/*To generate and print the first „N‟ Fibonacci numbers 
such that Fn = F(n-1) + F(n-2) where n>2. A Fibonacci 
sequence is defined as “the first and second terms in the 
sequence are 0 and 1. Subsequent terms are found by 
adding the preceding two terms in the sequence*/

#include<stdio.h>

int main(){
    int first,second,third,n;
    printf("Enter limit(n):");
    scanf("%d",&n);
    first=0;
    second=1;
    
    printf("Fibonacci sequence is,\n");
    printf("%d\t%d\t",first,second);

    third=first+second;

    int term = 2;//term is iniatilised as 2 bcoz first two terms are already printed.

    while(term<n){
        printf("%d\t",third);
        //swap(exchange/move) first and second to move thorugh the series.
        first=second;
        second=third;
        third=first+second;
        //this makes to generate next term by considering previous two terms.
        term++;
        //move to next term.
    }
    return 0;
}