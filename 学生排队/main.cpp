#include <bits/stdc++.h>
using namespace std;
int que[1005],des[1005];
void smove(int s,int p);
int n,m,snum,change;
int main()  {
    cin>>n>>m;
    for (int i=0;i<=n;i++)   que[i]=des[i]=i;
    for (int i=0;i<m;i++)   {
        cin>>snum>>change;
        smove(snum,change);
//        cout<<"que:\t";
//        cout<<que[1];
//        for (int i=2;i<=n;i++)  cout<<' '<<que[i];
//        cout<<endl;
//        cout<<"des:\t";
//        cout<<des[1];
//        for (int i=2;i<=n;i++)  cout<<' '<<des[i];
//        cout<<endl;
    }
    cout<<que[1];
    for (int i=2;i<=n;i++)  cout<<' '<<que[i];
    cout<<endl;
    return 0;
}

void smove(int s,int p) {
    if (p>0)    {
        int dd=des[s];
        for (int i=dd+1;i<=dd+p;i++)  {
            que[i-1]=que[i];
        }
        que[dd+p]=s;
        des[s]=dd+p;
        for (int i=1;i<=n;i++)
            des[que[i]]=i;
        return;
    }
    else    {
        p=-p;
        int dd=des[s];
        for (int i=dd-1;i>=dd-p;i--)  {
            que[i+1]=que[i];
        }
        que[dd-p]=s;
        des[s]=dd-p;
        for (int i=1;i<=n;i++)
            des[que[i]]=i;
        return;
    }
}
