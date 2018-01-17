#include<stdio.h>
int main()
{
    int t; 
    scanf("%d",&t);
    int a0;
    for(a0 = 0; a0 < t; a0++)
    {
        long b,sum=0; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);
        if(z>=x&&z>=y)
        {
            sum=sum+(b*x)+(w*y);           
        }    
        else// if (z<x&&z<y)
        {
            if(x<y)
            {
                if(x+z>=y)
                    sum=sum+(b*x)+(w*y);
                else
                    sum=sum+(b+w)*x+(w*z);
            }
            else if(x==y)
            {
                sum=sum+(b*x)+(w*y);            
            }
            else
            {
                if(y+z>=x)
                    sum=sum+(b*x)+(w*y);
                else
                    sum=sum+(b+w)*y+(b*z);
            }
        }
        printf("%ld\n",sum);
    }
    return 0;

}
