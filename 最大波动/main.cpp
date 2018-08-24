#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()  {
    int n,mx=0;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
    }
    for (int i=1;i<n;i++)   {
        if (abs(a[i]-a[i-1])>mx)
            mx=abs(a[i]-a[i-1]);
    }
    cout<<mx<<endl;
    return 0;
}
