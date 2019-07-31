#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N];
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int mx=max(a[0],a[n-1]);
    int mn=min(a[0],a[n-1]);
    if (n&1)    {
        printf("%d %d %d\n",mx,a[n/2],mn);
    }
    else {
        double tmid=1.0*(a[(n-1)/2]+a[n/2])/2;
        int tans=tmid*100,ans;
        if (tans%10>=5) ans=tans/10+1;
        else ans=tans/10;
        if (ans%10==0)
            printf("%d %d %d\n",mx,ans/10,mn);
        else
            printf("%d %.1lf %d\n",mx,1.0*ans/10,mn);
    }
    return 0;
}
