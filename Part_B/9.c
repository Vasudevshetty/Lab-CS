/*To perform addition and subtraction of two matrices 
after checking their compatibility and print both input 
& output matrices with suitable headings. Use user defined functions to read and print the matrices*/

#include<stdio.h>
#define max 10

int a[max][max],b[max][max],res[max][max];  //a = matrix 1 |||ly b = matrix 2. 
int m,n,i,j;
//m & n = order(mxn). i&j -- iterators.
//Globally declared instead of declaring n number of times.

void input(int mat[max][max]);
void output(int mat[max][max]);

void add();
void sub();

void menu();
//Corresponding functions performing tasks as named..

int main(){
    printf("Enter order of the matrices(m & n):");
    //Compatible to add/subtract if both the matrices index are equal.
    scanf("%d %d",&m,&n);
    //So once inputed can be used anywhere in the program since order remains same for all matrices even sum.

    input(a);
    input(b);

    menu();
    return 0;
}

void input(int mat[max][max]){  //Corresponding matrices are passed as parameters.
    printf("Enter elements of matrix,\n");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
}
void output(int mat[max][max]){//Corresponding matrices are passed as parameters.
    printf("Resultant matrix\n");
    for(i=0;i<m;i++){
       for(j=0;j<n;j++)
        printf("%d\t",mat[i][j]);
        printf("\n");
    }
}
void add(){
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
        res[i][j]=a[i][j]+b[i][j];
}
void sub(){
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
        res[i][j]=a[i][j]-b[i][j];
}
void menu(){
    int op;//menu driven
    printf("\n\nEnter Matrix operations.\n");
    printf("1.Addition.\t2.Subtraction.\n");
    scanf("%d",&op);
    switch(op){
        case 1:add();
        output(res);
        break;
        case 2:sub();
        output(res);
        break;
        deafult:printf("Invalid choice.\n");
        menu();
    }
}