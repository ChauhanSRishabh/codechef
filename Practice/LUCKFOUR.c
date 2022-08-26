#include<stdio.h>
int main()
{
	long int t,s[100000]={0};
	unsigned long int n;
	int i,k;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lu",&n);
		while(n!=0)
		{
			k=n%10;
		    if(k==4)
		    s[i]+=1;
		    n=n/10;
	    }
	}
	for(i=0;i<t;i++)
		printf("%ld\n",s[i]);
	return 0;
}
