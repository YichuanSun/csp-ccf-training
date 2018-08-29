#include <bits/stdc++.h>
using namespace std;
int a[1005];
int n,cnt;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<n;)   {
        for (int j=i;j<n;j++)  {
            if (a[i]!=a[j]) {
                i=j;
                break;
            }
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
