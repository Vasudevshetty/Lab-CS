/*To input N integer numbers into a single dimension 
array, sort them in to ascending order using “BUBBLE 
SORT” technique, and then to print both the given 
array and the sorted array with suitable headings.*/

#include<stdio.h>
#define max 10

int main(){
    int a[max],n;
    int i,j,temp;
    printf("Enter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        //Traverse whole array.
        for(j=0;j<n-1;j++){
        //Compare all elements while traversing.    
            if(a[j]>a[j+1]){        //if true *swap*
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array.\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    return 0;
}