/*To find the area of a Triangle with 3 sides given using formula, Area = √(s(s-a) (s-b) (s-c)) 
where a, b and c are lengths of sides of Triangle, and s = (a+b+c) / 2*/

#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float area, s;//s = semiperimeter
    
    printf("Enter 3 sides (a, b & c):");
    scanf("%d %d %d",&a,&b,&c);
    
    s=(a+b+c)/2;
    area=sqrt((s)*(s-a)*(s-b)*(s-c));
    
    printf("Area of the given traingle is %.2f\n",area);
    return 0;
}