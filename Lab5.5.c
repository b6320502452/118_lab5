#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,sum=0,max=-32768;
    scanf("%d %d",&n,&m);
    int a[n][n],b[m][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-(m-1);i++)
    {
        for(j=0;j<n-(m-1);j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                for(l=0;l<m;l++)
                {
                    b[k][l]=a[k+i][l+j];
                    sum+=b[k][l];
                }
            }
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    printf("%d",max);
}
