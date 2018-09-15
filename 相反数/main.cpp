#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],n;
bool fdo(int t) {
    for (int i=0;i<n;i++)
        if (a[i]==-t)   return true;
    return false;
}
int main()  {
    int cnt=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   scanf("%d",&a[i]);
    for (int i=0;i<n;i++)
        if (fdo(a[i]))  cnt++;
    printf("%d\n",cnt/2);
    return 0;
}
