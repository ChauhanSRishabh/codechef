#include <iostream>
using namespace std;
int main()
{
	int t,i;
	cin >> t;
	while(t--)
	{
		int n,flag = 0,check=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n;i++)
		{
			if (a[i] == 7)
				check = 1;
		}
		if(check == 0)
			goto label;
		for(i=1;i<=n/2;i++)
		{
			if(a[0]==1 && (a[i]-a[i-1]) <= 1 && (a[i]-a[i-1]) >= 0 && a[i] <= 7)
			{
				if(a[i-1] == a[n-i])
				{
					flag=1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << "yes" << endl;
		else
			label : cout << "no" << endl;
	}
	return 0;
}
