#include <bits/stdc++.h>
using namespace std;
bool kids[1005];
int main()
{
    int n,k;
    cin>>n>>k;
    int num=n,now=1;
    int cnt=1;
    for (;num!=1;)  {
        if ((cnt%k==0||cnt%10==k))    {
            kids[now]=1;
            num--;
            int trace=now;
            while (kids[trace]==true)
                trace=trace%n+1;
            now=trace;
        }
        else    {
            now=now%n+1;
            while (kids[now]==true) now=now%n+1;
        }
        cnt++;
    }
    for (int i=1;i<=n;i++)
        if (!kids[i])   cout<<i<<endl;
    return 0;
}
