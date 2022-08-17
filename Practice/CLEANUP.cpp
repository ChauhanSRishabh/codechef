#include <iostream>
using namespace std;
int main()
{
	int t,n,m,i,j,flag=0;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		int ind[m];
		for(i=0;i<m;i++)
		{
			cin>>ind[i];
		}
		int a[n];
		for(i=0;i<n;i++)
		{
			a[i]=i+1;
		}
		int b[n-m];
		int k=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==ind[j])
				{
					flag=1;
				}
			}
			if(flag == 0)
			{
				b[k] = a[i];
				k++;
			}
			flag = 0;
		}
		for(i=0;i<n-m;i=i+2)
		{
			cout << b[i] << " ";
		}
		cout << endl;
		for(i=1;i<n-m;i=i+2)
		{
			cout << b[i] << " ";
		}


	}

	return 0;


}
