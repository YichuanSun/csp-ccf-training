#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],b[N];
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<n;i++)   {
        if (i==0)   b[i]=(a[i]+a[i+1])/2;
        else if (i==n-1)    b[i]=(a[n-1]+a[n-2])/2;
        else    b[i]=(a[i-1]+a[i]+a[i+1])/3;
    }
    cout<<b[0];
    for (int i=1;i<n;i++)   cout<<' '<<b[i];
    cout<<endl;
    return 0;
}
