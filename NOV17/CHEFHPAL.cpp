#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,a;
		cin >> n >> a;
		string s="",s1="aaababbb",s3="ababba";
		if(a==1)
		{
			cout << n << " ";
			for(int i=0;i<n;i++)
				cout << 'a';
		}
		else if(a==2)
		{
			if(n==1)
				cout << "1 a";
			else if(n==2)
				cout << "1 ab";
			else if(n==3)
				cout << "2 abb";
			else if(n==4)
				cout << "2 aabb";
			else if(n>4 && n<=8)
			{
				cout << "3 ";
				for(int i=0;i<n;i++)
				{
					s = s + s1[i%8];
				}
				cout << s;
			}
			else
			{
				cout << "4 ";
				for(int i=0;i<n;i++)
				{
					s = s + s3[i%6];
				}
				cout << s;
			}
    	}
    	else
		{
			string s2="";
			cout << "1 ";
			for(int i=0;i<a;i++)
			{
				s2 += char(97+i);
			}
			for(int i=0;i<n;i++)
			{
				s += s2[i%(s2.length())];
			}
			cout << s;
		}
		cout << endl;	
	}
	return 0;
}
