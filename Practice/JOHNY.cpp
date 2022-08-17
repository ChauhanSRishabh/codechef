#include <iostream>
using namespace std;
int main()
{
	int t,n,i,j,k,fav;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		cin >> k;
		fav = a[k-1];
        //sorting  
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==fav)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}
