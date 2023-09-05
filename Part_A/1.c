/*1.To find the volume of sphere using the formula V=4/3pir^3*/
//Algorithm.

#include<stdio.h>
#include<math.h>

int main(){
    int r;
    float vol;
    printf("Enter radius:");
    scanf("%d",&r);
    vol=(4.00/3)*(3.14)*pow(r,3);
    // 4.00 should be taken since 4/3 becomes int/int which returns int. but 4/3 is of float type.(contains decimal)
    printf("Volume of the given sphere is %.2f\n",vol);
    return 0;
}