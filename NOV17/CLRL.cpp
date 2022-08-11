#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,r,i;
		cin >> n >> r;
		int a[n],left[n],right[n];
		int ls=-1,rs=-1,flag =0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i]>r)
			{
				++rs;
				right[rs]=a[i];
			}
			else
			{
				++ls;
				left[ls]=a[i];
			}
		}	
			if(rs>0){
			for(i=rs;i>0;i--)
			{
				if(right[i]<right[i-1])
					continue;
				else
				{
					flag=1;
					break;
				}
			}}
			if(ls>0){
			for(i=ls;i>0;i--)
			{
				if(left[i]>left[i-1])
					continue;
				else
				{
					flag=1;
					break;
				}
			}}
		if(flag==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
 
}
