#include<stdio.h>
int main()
{
    int n,count=0,fac[3]={2,3,5},ck,i,k=0;
    scanf("%d",&n);
    for(i=1;1;i++)
    {
        ck=i;
        while(k!=3)
        {
            if(ck%fac[k]==0)
            {
                ck/=fac[k];
            }
            else
                k++;
        }
        k=0;
        if(ck==1)
        {
            count++;
            if(count==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
}
