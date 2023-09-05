/*To perform the following using bitwise operators:
c = a & b ; d = a | b ; e = ~a
f = a >> n; g = a << n; h = a ^ b*/

#include<stdio.h>

int main(){
    int a,b,n;
    int c,d,e,f,g,h;

    printf("Enter a & b:");
    scanf("%d %d",&a,&b);
    printf("Enter n(for right n left shift):");
    scanf("%d",&n);

    c=a&b;
    d=a|b;
    e=~a;
    f=a>>n;
    g=a<<n;
    h=a^b;

    printf("Results of bitwise operations are,\n");
    printf("And(&)=%d\tOr(|)=%d\tXor(^)=%d\n",c,d,h);//operations on a & b.
    printf("Negation(~)=%d\nRigth shift(>)=%d\tLeft shift(<)=%d\n",e,f,g);//operations on only a or b.

    return 0;
}