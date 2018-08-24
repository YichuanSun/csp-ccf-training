#include <bits/stdc++.h>
#define N 105
using namespace std;
int order[N];
struct seat{
    bool sit;   //0是无人，1是有人
    int nex;    //表示它及之后的连空座者
};
seat train[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>order[i];
    for (int i=1;i<=100;) {
        int cnt=5;
        while (cnt) train[i++].nex=cnt--;
    }
    //for (int i=1;i<=100;i++)    cout<<train[i].nex<<' ';
    for (int i=0;i<n;i++)   {
        int j=1;
        for (;j<=100;j++)    {
            if (!train[j].sit&&train[j].nex>=order[i]) {
//                for (int k=1;k<j;k++)   {
//                    train[k].nex=train[k].nex-train[j].nex;
//                }
                int tmp=j,cc=0;
                while ((tmp-1)%5)   tmp--;
                for (int q=tmp+4;q>=tmp;q--) {
                    if (train[tmp].sit==false)  {
                        train[tmp].nex=++cc;
                    }
                }
                cout<<j;
                for (int k=j;k<j+order[i];k++)  {
                    train[k].sit=true;
                    train[k].nex=0;
                    if (k!=j)   cout<<' '<<k;
                }
                cout<<endl;
//                cout<<"train[j].nex=\t"<<train[j].nex<<endl;
//                for (int q=1;q<=20;q++)
//                    cout<<q<<'-'<<train[q].nex<<'-'<<train[q].sit<<' ';
//                cout<<endl;
                break;
            }
        }
        int cnt=order[i];
        if (j==101) {
            for (int k=1;k<=100;k++)    {
                if (cnt&&train[k].sit==false)   {
                    cout<<k;
                    if (cnt!=0) cout<<' ';
                    else    {
                        cout<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
