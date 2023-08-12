#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int m,j;
	scanf("%lld",&m);
	for (j=0;j<m;j++)
	{
		long long int n,count=0,i;
		scanf("%lld",&n);
		long long int*l=(long long int*)malloc(n*sizeof(long long int));
		for(i=0;i<n;i++)
		{
			scanf("%lld",&l[i]);
		}
		for(i=0;i<25;i++)
		{
			long long int t=0;
			while(t<n && ((l[t]&(1<<i))!=0))
			{
				t++;
			}
			if(t==n)
			{
				count+=((n)*(1<<i))+(((n*(n-1))/2)*(1<<i))-(1<<i);
			}
			else
			{
				long long int k=n-1;
				while(k>=0 && ((l[k]&(1<<i))!=0))
				{
					k--;
				}
			count+=((t)*(1<<i))+((n-1-k)*(1<<i))+(t*(n-1-k))*(1<<i);
			}
		}
		printf("%lld",count);
		printf("\n");
	}
}