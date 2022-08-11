#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a;
     	cin >> a;
     	int l= a.length();
     	int ca = 0, cb = 0, cd = 0;
     	stack<char> st;
        st.push('1');
        for (int i = 0; i < l; ++i)
     	{
     		if(a[i] == 'A')
            {
                ca++;
                if(st.top() == 'A')
                {
                    ca += cd;
                    cd = 0;
                }
                else if(st.top() == 'B' || st.top() == '1' )
                    cd = 0;
                st.push('A');
            }
            else if(a[i] == 'B')
            {
                cb++;
                if(st.top() == 'B')
                {
                    cb += cd;
                    cd = 0;
                }
                else if(st.top() == 'A' || st.top() == '1' )
                    cd = 0;
                st.push('B');
            }
            else
                cd++;
     	}
    	cout << ca << " " << cb << endl;

	}
	return 0;
}
