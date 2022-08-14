#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int s, sg, fg, d ,t;
		float soc,gs,gf;
		cin >> s >> sg >> fg >> d >> t;
		soc= (float)(s + ((d*50*3.6)/(float)t));
		gs = (float)abs(soc-sg);
		gf = (float)abs(soc-fg); 
		if(gs==gf || sg==fg)
			cout << "DRAW" << endl;
		else if(gs < gf)
			cout << "SEBI" << endl;
		else if(gs > gf)
			cout << "FATHER" << endl;
	}
	return 0;
}
