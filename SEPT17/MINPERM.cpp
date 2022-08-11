#include <bits/stdc++.h>
using namespace std;
void swapr(long int *,long int *);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int i,n;
		cin >> n;
		long int a[n];
		for(i=0;i<n;i++)
			a[i]=i+1;
		for(i=0;i<n;i++)
		{
			if(a[i] == i+1)
				if(i != n-1)
					swapr(&a[i+1],&a[i]);
				else
					swapr(&a[i],&a[i-1]);
		}
		for (i=0;i<n;i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

void swapr(long int *p,long int *q)
{
	long int temp;
	temp = *p;
	*p=*q;
	*q=temp;
	return;
}
