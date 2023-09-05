/*To find the TRACE and NORM of a given matrix A 
(M x N) by checking the compatibility and print both 
input & output matrices with suitable headings. Use 
user-defined functions to find their TRACE and 
NORM.*/

#include<stdio.h>
#include<math.h>
#define max 10

int n,i,j,sum;    //globally decelared.

float norm(int mat[max][max]);
//return sqrt of sum which is a float type.
int trace(int mat[max][max]);

int main(){
    int mat[max][max];
    printf("Enter order of matrix(nxn)[square matrix only]:");
    scanf("%d",&n);
    //since square matrix are only compatible n is enough to ne taken.

    printf("Enter elements of matrix,\n");
     for(i=0;i<n;i++)
       for(j=0;j<n;j++)
        scanf("%d",&mat[i][j]);

    printf("Norm of the given matrix is %.2f\n",norm(mat));
    printf("Trace of the given matrix is %d\n",trace(mat));

    return 0;
}

float norm(int mat[max][max]){
    float Norm;
    sum=0;
    //Should be initailsed.
    
    for(i=0;i<n;i++)        //sum of square of all elements.
       for(j=0;j<n;j++)
       sum+=pow(mat[i][j],2);
    
    Norm = sqrt(sum);       //norm is defined as sqrt of the above sum.
    return Norm;
}

int trace(int mat[max][max]){
    sum=0;
    //Should be initailsed.

    for(i=0;i<n;i++)        //diagonal elements sum.
        sum+=mat[i][i];

    return sum;
}