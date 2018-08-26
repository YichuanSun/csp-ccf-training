#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()  {
    ios::sync_with_stdio(false);
    int n,cnt=0;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=1;i<n-1;i++) {
        if (a[i]>a[i-1]&&a[i]>a[i+1])   cnt++;
        else if (a[i]<a[i-1]&&a[i]<a[i+1])  cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
