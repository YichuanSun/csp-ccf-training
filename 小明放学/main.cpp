#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll r,y,g,n,tim;
int main()  {
    ll jud,tt;
    cin>>r>>y>>g>>n;
    for (int i=0;i<n;i++)   {
        cin>>jud>>tt;
        if (jud==0) tim+=tt;
        else if (jud==1) {
            if (tim<=tt)    tim=tt;
            else    {
                ll nw=(tim-tt)%(r+y+g);
                if (nw>0&&nw<=g)    tim+=0;
                else if (nw>g&&nw<=g+y) tim+=r+y+g-nw;
                else if (nw>g+y&&nw<r+y+g)  tim+=r+y+g-nw;
                else ;
            }
        }
        else if (jud==2) {
            if (tim<=tt)   tim=tt;
            else {
                ll nw=(tim-tt)%(r+y+g);
                if (nw>0&&nw<=r)    tim+=r-nw;
                else if (nw>r&&nw<=g+r) tim+=0;
                else if (nw>g+r&&nw<r+y+g)  tim+=r+y+g-nw+r;
                else ;
            }
        }
        else {
            if (tim<=tt)   ;
            else {
                ll nw=(tim-tt)%(r+y+g);
                if (nw>0&&nw<=y) tim+=y+r-nw;
                else if (nw>y&&nw<=y+r)  tim+=y+r-nw;
                else if (nw>y+r&&nw<r+y+g)  tim+=0;
                else ;
            }
        }
    }
    cout<<tim<<endl;
    return 0;
}
