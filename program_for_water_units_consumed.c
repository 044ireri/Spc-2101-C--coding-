# include<stdio.h>
int main(){
int units;
float total_bill=0.0;
printf("enter the number of water units consumed: ");
scanf("%d", units);
if(units<=30)
{total_bill=units*20.0;}
else if(units<=60){
total_bill=(30*20.0)+((units-30)*25.0);
}
else {
total_bill=(30*20.0)+(30*25.0)+((units-60)*30);
}
//Display the total bill with 2 decimal places 
printf("total water bill:KES%2f \n",total_bill);
return 0;
}

    
    
    
    

     