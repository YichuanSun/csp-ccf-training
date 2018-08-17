#include <bits/stdc++.h>
#define N 105
using namespace std;

int main()  {
    int n,l,t;
    int pos[N],v[N];
    fill(v,v+N,1);
    cin>>n>>l>>t;
    for (int i=0;i<n;i++)   cin>>pos[i];
    for (int time=0;time<t;time++)  {
        //Ð¡Çò¼äÅö×²
        for (int i=0;i<n;i++)   {
            for (int j=i+1;j<n;j++) {
                if (pos[i]==pos[j]&&i!=j)   {
                    v[i]=-v[i];
                    v[j]=-v[j];
                }
            }
        }
        //ÅöÇ½
        for (int i=0;i<n;i++)   {
            if (pos[i]==0||pos[i]==l)
                v[i]=-v[i];
        }
        for (int i=0;i<n;i++)   pos[i]+=v[i];
    }
    cout<<pos[0];
    for (int i=0;i<n;i++)   {
        if (i==0)   continue;
        cout<<' '<<pos[i];
    }
    cout<<endl;
    return 0;
}




