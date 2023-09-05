/*To generate an electricity bill by accepting meter 
number of the consumer, number of units consumed 
and print out the detail charges for the below scenario:
An electricity board charges the following rates for the 
use of electricity: 
 for the first 200 units 80 paise per unit
 for the next 100 units 90 paise per unit 
 beyond 300 units Rs 1 per unit
All users are charged a minimum of Rs. 100 as meter 
charge. If the total amount is more than Rs. 400, then an 
additional surcharge of 15% of total amount is charged.*/

#include<stdio.h>

int main(){
    int meterno,units;
    float charge,totalcharge,servicecharge;
    char name[10];
    printf("Enter customer name:");
    scanf("%s",name);
    printf("Enter meter no:");
    scanf("%d",&meterno);
    printf("Enter no of units consumed(Kwh):");
    scanf("%d",&units);

    if(units<=200){
        charge=units*0.8;//0.8 is in rupees.
    }
    else if(units>=200 && units<=300){
        charge=units*0.9;//0.9 is in rupees.
    }
    else{
        charge=units*1;//1 is in rupees.
    }

    servicecharge=100;//given.
    totalcharge=servicecharge+charge;

    if(totalcharge>400)
        totalcharge+=(0.15*totalcharge);

    printf("\n\n\tElectricity Bill\n");
    printf("Customer name:%s\nmeter no:%d\nTotal charge:%.2f\n",name,meterno,totalcharge);

    return 0;
}