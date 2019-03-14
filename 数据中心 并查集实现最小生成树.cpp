#include <bits/stdc++.h>
#define N 50005
#define M 100005
using namespace std;
int n,m,root,ans=-1;
class edge {
    public:
        int u,v,cost;
        edge() : u(0),v(0),cost(0) {}
        edge(int a,int b,int c) : u(a),v(b),cost(c){}
    bool operator < (edge const ed) const {
        return cost<ed.cost;
    }
};
edge es();
vector<edge> ve;

int par[N],h[N];
void init(int n);
int Find(int a);
bool same(int a,int b);
void unite(int a,int b);

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,res=0;
    cin>>n>>m>>root;
    for (int i=0;i<m;i++)   {
        cin>>a>>b>>c;
        ve.push_back(edge(a,b,c));
    }
    init(n);
    sort(ve.begin(),ve.end());
    for (int i=0;i<(int)ve.size();i++)  {
        if (!same(ve[i].u,ve[i].v)) {
            unite(ve[i].u,ve[i].v);
            int t=ve[i].cost;
            res+=t;
            ans=max(t,ans);
        }
    }
    cout<<ans<<endl;
    return 0;
}

void init(int n) {
    for (int i=0;i<=n;i++)   {
        par[i]=i;
        h[i]=0;
    }
}

int Find(int a)   {
    if (a==par[a])  return a;
    return par[a]=Find(par[a]);
}

void unite(int a,int b) {
    a=Find(a);
    b=Find(b);              //原先WA是因为我这里没有对a和b的赋值，直接写了个判断 if Find(a)==Find(b),找bug找了半天
    if (a==b)   return;     //一定注意这个地方啊
    if (h[a]<h[b])  par[a]=b;
    else {
        par[b]=a;
        if (h[a]==h[b]) h[a]++;
    }
}

bool same(int a,int b)  {return Find(a)==Find(b);}


//标准并查集
//#include <bits/stdc++.h>
//using namespace std;
//int par[MN],h[MN];
//void init(int n);
//int fid(int x);
//int main()  {
//    int n;
//    cin>>n;
//    return 0;
//}
//
//void init(int n)    {
//    for (int i=0;i<n;i++)   {
//        par[i]=i;
//        h[i]=0;
//    }
//}
//
//int fid(int x)   {
//    if (par[x]==x)  return x;
//    else return par[x]=fid(par[x]);
//}
//
//void unite(int x,int y) {
//    x=fid(y);
//    y=fid(x);
//    if (x==y)   return;
//    if (h[x]<h[y])  par[x]=y;
//    else {
//        par[y]=x;
//        if (h[x]==h[y]) h[x]++; //长度相等时挂上，树高会+1
//    }
//}
//
//bool same(int a,int b)  {
//    return fid(a)==fid(b);
//}
//
//
//
