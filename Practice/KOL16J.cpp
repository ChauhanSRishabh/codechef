#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,flag=0,sum=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		for (i = 0; i < n; i++)
		{
			if(a[i]!=i+1)
			{
				flag = 1;
				break;
			}
		}
		if(sum == (n*(n+1))/2 && flag == 1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;		
}
