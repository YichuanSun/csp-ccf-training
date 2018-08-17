#include <bits/stdc++.h>

using namespace std;
int a[1005],used[1005];
int main()
{
    int n,mmin=100000;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<n;i++)   {
        if (i+1>=n)  continue;
        int te=abs(a[i+1]-a[i]);
        mmin=min(te,mmin);
    }
    cout<<mmin<<endl;
    return 0;
}
