#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],tis[N];
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   scanf("%d",&a[i]);
    for (int i=0;i<n;i++)   {
        tis[a[i]]++;
        printf("%d",tis[a[i]]);
        printf("%c",i==n-1?'\n':' ');
    }
    return 0;
}
