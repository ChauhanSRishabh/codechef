#include<iostream>
using namespace std;
int main()
{
	int t,a[]={100,50,10,5,2,1},s[1000]={0},k,j,i;
	long int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		k=0;
		while(n!=0&&k<6)
		{
			j=n%a[k];
			s[i]+=n/a[k];
			n=j;
			k=k+1;
		}
	}
	for(i=0;i<t;i++)
	cout<<s[i]<<endl;
	return 0;
	
}
