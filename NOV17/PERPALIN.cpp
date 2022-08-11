#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,p,d=0,i,j;
		cin >> n >> p;
		d=n/p;
		if(p==1 || p==2)
			cout << "impossible" << endl;
		else
		{
			for (i = 0; i < d; i++)
			{
				for (j = 0; j < p; j++)
				{
					if(j != 0 && j != (p-1))
						cout << "b";
					else
						cout << "a";
				}
			}
			cout << endl;
		}

	}
	return 0;	
}
