/*To compute all the roots of a quadratic equation by accepting the non-zero coefficients. Print appropriate 
messages.*/

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,disc;//disc = descrimanant
    float root1,root2,real,img;

    printf("Enter co-efficients(ax2+bx+c):");
    scanf("%f %f %f",&a,&b,&c);

    disc = pow(b,2) - 4*a*c;

    if(disc==0){
        root1=root2=-b/(2*a);
        printf("Roots are equal\nRoots are %.2f & %.2f\n",root1,root2);
    }
    else if(disc>0){
        root1=((-b+sqrt(disc))/(2*a));
        root2=((-b-sqrt(disc))/(2*a));
        printf("Roots are unequal\nRoots are %.2f & %.2f\n",root1,root2);
    }
    else{
        real=-b/(2*a);
        img=(disc/(2*a));
        printf("Roots are imaginary\nRoots are %.2f%.2fi & %.2f%.2fi\n",real,img,real,img*-1);
    }
    return 0;
}