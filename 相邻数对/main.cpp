#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],n,cnt;
bool fd(int a[],int f)  {
    for (int i=0;i<n;i++)
        if (a[i]==f)    return true;
    return false;
}
int main()  {
    scanf("%d",&n);
    for (int i=0;i<n;i++)   scanf("%d",&a[i]);
    for (int i=0;i<n;i++)   {
        if (fd(a,a[i]-1))   cnt++;
        if (fd(a,a[i]+1))   cnt++;
    }
    printf("%d\n",cnt/2);
    return 0;
}
