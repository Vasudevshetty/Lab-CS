/*To input N integer numbers in ascending order into a 
single dimension array, and then to perform “BINARY 
SEARCH” for a given Key integer number and report 
success or failure in the form of a suitable message.
*/

#include<stdio.h>
#define max 10

int main(){
    int a[max],n,key;
    int st,end,mid; //Takes corresponding meaning wrt array index.
    int i;

    printf("Enter size of array:");
    scanf("%d",&n);


    printf("Enter elements of array.(Sorted array only!!)\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key to be searched:");
    scanf("%d",&key);

    st=0;
    end=n;  //assign initial values.

    while(st<=end){
        mid=(st+end)/2;     //Find mid of the array.

        if(a[mid]==key){
            printf("Success\nElement found(%d) at index(%d).\n",key,mid + 1);
            return 0;
        }
        else if(a[mid]>key){    //key if still behind our mid of the array
            end=mid-1;
        }
        else{       //a[mid]<key i.e key is far ahead of our mid of the array.
            st=mid+1;
        }
    }
       
    printf("Failure.\nElement not found.\n");
    return -1;
    

}