#include <bits/stdc++.h>
using namespace std;
long int a[100000]={0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,i,min=0,c=0;
        cin >> n;
        for(i=0;i<n;i++)
            cin >> a[i];
        min = a[0];
        c=1;
        for(i=1;i<n;i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                c=i+1;
            }
        }
        cout << c << endl;
    }
    return 0;
}
