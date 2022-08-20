#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j,p=1,a[1000];
	cin>>t;
	for(i=0;i<t;i++)
	{
		p=1;
		cin>>n;
		for(j=n;j>=1;j--)
		p=p*j;
		a[i]=p;
	}
	for(i=0;i<t;i++)
	cout<<a[i]<<endl;
	return 0;
	
}
