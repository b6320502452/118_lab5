#include<stdio.h>
int main()
{
    int n,count=0,fac[3]={2,3,5},ck=0;
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else
    {
        for(int i=2;1;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i%fac[j]==0)
                {
                    ck=1;
                    break;
                }
            }
            if(ck==1)
            {
                count++;
                if(count==n)
                {
                    printf("%d",i);
                    break;
                }
            }
            ck=0;
        }
    }
}
