#include <bits/stdc++.h>
#define N 1000005
using namespace std;
int e[N],ans;
int main()  {
    int n,a,b,mx1,mx2;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a>>b;
        if (i==n-1) mx1=b;
        for (int j=a;j<b;j++)  e[j]++;
    }
    for (int i=0;i<n;i++)   {
        cin>>a>>b;
        if (i==n-1) mx2=b;
        for (int j=a;j<b;j++)  e[j]++;
    }
    int mx=max(mx1,mx2);
    for (int i=0;i<=mx;i++) if (e[i]==2)  ans++;
    cout<<ans<<endl;
    return 0;
}
