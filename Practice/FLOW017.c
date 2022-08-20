#include<stdio.h>
int main()
{
	int t,i;
	long int a,b,c,l,l2[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld %ld %ld",&a,&b,&c);
		if((a>b&&a<c)||(a>c&&a<b))
		l=a;
		else if((b>a&&b<c)||(b>c&&b<a))
		l=b;
		else if((c>b&&c<a)||(c>a&&c<b))
		l=c;
		else if(a==b==c)
		l=a;
		l2[i]=l;
	}
	for(i=0;i<t;i++)
	printf("%ld\n",l2[i]);
	return 0;
}
