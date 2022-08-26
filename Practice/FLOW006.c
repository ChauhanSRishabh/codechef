#include<stdio.h>
int main()
{
	long int n,j,k;
	int i,t,a[1000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		j=n;
		while(j!=0)
		{
			k=j%10;
			a[i]+=k;
			j=j/10;
		}
	}
	for(i=0;i<t;i++)
		printf("%d\n",a[i]);
	return 0;
}
