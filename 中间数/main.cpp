#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()  {
    int n,ori,j,k;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for (j=ori=(n-1)/2;a[j]==a[ori];j++);
    for (k=ori;a[k]==a[ori];k--);
    if (k+1==n-j)   cout<<a[ori]<<endl;
    else    cout<<-1<<endl;
    return 0;
}
