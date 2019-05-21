#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
        {
            c[i+1]=c[i]+1;
        }
    }
    for(i=0;i<n;i++)
    {
    	if(c[i]==c[i+1])
    	{
    		c[i]=c[i]+1;
		}
        sum=sum+c[i];
    }
    printf("%d",sum);

}
