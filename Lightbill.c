#include<stdio.h>
int main()
{
   int units,amt;
   printf("Enter Total Units used");
   scanf("%d",&units);
   if(units>0 && units<=100)
   amt=10*units;
   if (units>100 && units<=200)
   amt=(10*100)+((units-100)*12);
   if (units>200 && units<=300)
   amt=(10*100)+(12*100)+((units-200)*14);
   if (units>300 && units<=400)
   amt=(10*100)+(12*100)+(14*100)+((units-300)*16);
   else
   amt=(10*100)+(12*100)+(14*100)+(16*100)+((units-400)*20);
  
   printf("Total bill for %d units is %d ",units,amt);
   return 0;
}