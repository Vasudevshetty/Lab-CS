/*To generate and print all the prime numbers between 
range N1 and N2, where „N1‟ and „N2‟ are value 
supplied by the user.
*/

#include<stdio.h>

int main(){
    int a,b; // range from a<-->b.
    int flag; // checking term for a particular task.
    printf("Enter range a(lower limit):");
    scanf("%d",&a);
    printf("Enter range b(upper limit):");
    scanf("%d",&b);

    while(a<=b){ //base condition.

        flag=0; //initial condtion.
        for(int i=2;i<=(a/2);i++){         //checking whether prime r not.
            if(a%i==0){
                flag=1;//if non prime.
                break;
            }
        }
        if(flag==0){
            printf("%d\t",a);//if prime.
        }
        a++;    
    }
    return 0;
}