#include <iostream>
using namespace std;
int main()
{
	int n,even=0,odd=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		if(a%2==0)
			even++;
		else
			odd++;
	}
	if(even > odd)
		cout << "READY FOR BATTLE" << endl;
	else
		cout << "NOT READY" << endl;
	return 0;
}
