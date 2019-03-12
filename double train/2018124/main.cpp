#include <bits/stdc++.h>
#define N 10005
#define INF 1000005
using namespace std;
int g[N][N],mincost[N];     //注意，此处经常犯的错误是g的无连接边未设为INF，mincost未初始化为INF
bool used[N];               //used初始化为全部false
int n,m,root,ans;
int prim();
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    fill(g[0],g[0]+N*N,INF);
    cin>>n>>m>>root;
    for (int i=1;i<=m;i++)   {
        cin>>a>>b>>c;
        g[a][b]=c;
        g[b][a]=c;
    }
    prim();
    cout<<ans<<endl;
    return 0;
}

int prim()  {
    for (int i=0;i<=n;i++)   {
        mincost[i]=INF;
        used[i]=false;
    }
    mincost[root]=0;
    int res=0;
    while (true)    {
        int v=-1;
        for (int u=1;u<=n;u++)   {
            if (!used[u]&&(v==-1||mincost[u]<mincost[v]))    v=u;
        }
        if (v==-1)  break;
        used[v]=true;
        res+=mincost[v];
        ans=max(mincost[v],ans);
        for (int u=1;u<=n;u++)
            mincost[u]=min(mincost[u],g[v][u]);
    }
    return res;
}
