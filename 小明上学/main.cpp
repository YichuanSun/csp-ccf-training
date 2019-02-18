#include <bits/stdc++.h>
using namespace std;

int main()  {
    int r,y,g,n,a,b,time=0;
    cin>>r>>y>>g>>n;
    for (int i=0;i<n;i++)   {
        cin>>a>>b;
        if (a==0)   time+=b;
        else if (a==1)  time+=b;
        else if (a==2)  time+=b+r;
        else ;
    }
    cout<<time<<endl;
    return 0;
}
