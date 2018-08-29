#include <bits/stdc++.h>
using namespace std;
int m,n,q;
char a[105][105];
bool used[105][105];
void dfs(int x,int y,char c);
void printa()   {
    for (int i=n-1;i>=0;i--)   {
        for (int j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>m>>n>>q;
    int t,x1,x2,y1,y2;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            a[i][j]='.';
    for (int i=0;i<q;i++)   {
        cin>>t;
        if (t==0)   {
            cin>>y1>>x1>>y2>>x2;
            if (x1>x2)  swap(x1,x2);
            if (y1>y2)  swap(y1,y2);
            if (x1==x2)
                for (int j=y1;j<=y2;j++)    {
                    if (a[x1][j]=='+')  continue;
                    else if (a[x1][j]=='|')
                        a[x1][j]='+';
                    else
                        a[x1][j]='-';
                }
            else if (y1==y2)
                for (int i=x1;i<=x2;i++)    {
                    if (a[i][y1]=='+')  continue;
                    else if (a[i][y1]=='-')
                        a[i][y1]='+';
                    else
                        a[i][y1]='|';
                }
        }
        if (t==1)   {
            int x,y;
            char c;
            cin>>y>>x>>c;
            for (int i=0;i<n;i++)   {
                for (int j=0;j<m;j++)   {
                    bool b1=(i==x-1&&j==y);
                    bool b2=(i==x&&j==y);
                    bool b3=(i==x+1&&j==y);
                    bool b4=(i==x&&j==y-1);
                    bool b5=(i==x&&j==y+1);
                    if (!(b1||b2||b3||b4||b5))  continue;
                    if (a[i][j]=='|'||a[i][j]=='-'||a[i][j]=='+')
                        continue;
                    if (!used[i][j])    dfs(i,j,c);
                }
            }
            memset(used,0,sizeof(used));
        }
    }
    printa();
    return 0;
}

void dfs(int x,int y,char c)    {
    used[x][y]=true;
    a[x][y]=c;
    for (int i=-1;i<=1;i++) {
        if (x+i<0||x+i>=n||used[x+i][y])    continue;
        if (a[x+i][y]=='|'||a[x+i][y]=='-'||a[x+i][y]=='+') continue;
        a[x+i][y]=c;
        dfs(x+i,y,c);
    }
    for (int j=-1;j<=1;j++) {
        if (y+j<0||y+j>=m||used[x][y+j])    continue;
        if (a[x][y+j]=='|'||a[x][y+j]=='-'||a[x][y+j]=='+') continue;
        a[x][y+j]=c;
        dfs(x,y+j,c);
    }
}
