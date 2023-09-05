/*To simulates a simple calculator to perform the basic 
arithmetic operations (Consider the operators +, -, x, / 
and % using „switch‟ statement)*/

#include<stdio.h>

int main(){
    int a,b,res;
    char op;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter operation.\n");
    printf("Addition(+)\tSubtraction(-)\tMultiplication(*)\n");
    printf("Quotient and Remainder(/)\n");
    scanf("%s",&op);
    
    printf("Enter b:");
    scanf("%d",&b);

    switch(op){
        case '+':{
            res=a+b;
            printf("Sum is %d\n",res);
        }break;
        case '-':{
            res=a-b;
            printf("Difference is %d\n",res);
        }break;
        case '*':{
            res=a*b;
            printf("Product is %d\n",res);
        }break;
        case '/':{
            res=a/b;
            printf("Quotient is %d\n",res);
            printf("Remiander is %d\n",a%b);
        }break;
        default:printf("Invalid operation.\n");
        break;
    }
    return 0;
}