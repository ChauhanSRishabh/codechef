#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int a[10]={0};
		cin >> s;
		long int n = s.length();
		long int i;
		for(i=0;i<n;i++)
			a[s[i]-'0']++;
		if(a[6]!=0)
		{
			if(a[5]>=1)
				cout << 'A';
			if(a[6]>=2)
				cout << 'B';
			if(a[7]>=1)
				cout << 'C';
			if(a[8]>=1)
				cout << 'D';
			if(a[9]>=1)
				cout << 'E';
		}
		if(a[7]!=0)
		{
			if(a[0]>=1)
				cout << 'F';
			if(a[1]>=1)
				cout << 'G';
			if(a[2]>=1)
				cout << 'H';
			if(a[3]>=1)
				cout << 'I';
			if(a[4]>=1)
				cout << 'J';
			if(a[5]>=1)
				cout << 'K';
			if(a[6]>=1)
				cout << 'L';
			if(a[7]>=2)
				cout << 'M';
			if(a[8]>=1)
				cout << 'N';
			if(a[9]>=1)
				cout << 'O';
		}
		if(a[8]!=0)
		{
			if(a[0]>=1)
				cout << 'P';
			if(a[1]>=1)
				cout << 'Q';
			if(a[2]>=1)
				cout << 'R';
			if(a[3]>=1)
				cout << 'S';
			if(a[4]>=1)
				cout << 'T';
			if(a[5]>=1)
				cout << 'U';
			if(a[6]>=1)
				cout << 'V';
			if(a[7]>=1)
				cout << 'W';
			if(a[8]>=2)
				cout << 'X';
			if(a[9]>=1)
				cout << 'Y';
		}
		if(a[9]!=0)
			if(a[0]>=1)
				cout << 'Z';
		cout << endl;	
	}
	return 0;
}
