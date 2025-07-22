#include<stdio.h>
int main()
{
    int units,amt=0;
    printf("Enter units:");
    scanf("%d",&units);
    
    if(units >=100)
    {
        amt = amt+(100*8);
        units -= 100;;
        if (units>=100)
        {
         amt = amt+(100*10);
         units -= 100;
         if (units>=100)
         {
            amt =amt+(100*12);
            units -=100;
            if (units>=100)
            {
                amt=amt+(100*15);
                units -=100;
                if (units>=100)
                {
                  amt = amt+(100*17);
                  units-=100;
                  if (units>=100)
                  {
                    amt=amt+(units*20);
                  }
                }else
                amt=amt+(units*17);
                

            }else
            amt=amt+(units*15);
            
         }else
         amt=amt+(units*12);
         
        }else
        amt=amt+(units*10);
        
    }else
    amt=amt+(units*8);

    printf("Total bill:%d",amt);

    return 0;
}