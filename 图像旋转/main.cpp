#include <bits/stdc++.h>
using namespace std;
int a[1005][1005],b[1005][1005];
int main()  {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>a[i][j];
    for (int j=m-1;j>=0;j--)   {
        for (int i=0;i<n;i++)   {
            b[m-1-j][i]=a[i][j];
        }
    }
    for (int i=0;i<m;i++)   {
        cout<<a[i][0];
        for (int j=1;j<n;j++)
            cout<<' '<<a[i][j];
        cout<<endl;
    }
    return 0;
}
