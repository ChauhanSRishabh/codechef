#include<iostream>
using namespace std;
int main()
{
	int t,i,j,s[1000];
	long int n,d;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		d=n%10;
		while(n/10!=0)
		n=n/10;
		d+=n;
		s[i]=d;
	}
	for(i=0;i<t;i++)
	cout<<s[i]<<endl;
}
