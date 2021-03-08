#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,sum=0,max=0;
    scanf("%d %d",&n,&m);
    int a[n][n],b[m][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-m+1;i++)
    {
        for(j=0;i<n-m+1;i++)
        {
            for(k=i;k<m+i;k++)
            {
                for(l=j;l<m+j;l++)
                {
                    sum+=a[k][l];
                }
            }
            if(sum>max)
                max=sum;
            sum=0;
        }
    }
    printf("%d",max);
}
