#include<bits/stdc++.h>
#define N 5
#define INF 1000005
using namespace std;
int ch[N][N];
int Search(int a);
int score();
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    while (n--) {
        for (int i=0;i<3;i++)
            for (int j=0;j<3;j++)
                cin>>ch[i][j];
        cout<<Search(1)<<endl;
    }
    return 0;
}

int Search(int a)    {
    int sc=score(),ans;
    ans=(a==1)?-INF:INF;
    if (sc!=INF)    return sc;
    for (int i=0;i<3;i++)   {
        for (int j=0;j<3;j++)   {
            if (ch[i][j]==0)    {
                ch[i][j]=a;
                int t=(a==1)?Search(2):Search(1);
                if (a==1)   ans=max(ans,t);
                else    ans=min(ans,t);
                ch[i][j]=0;
            }
        }
    }
    return ans;
}

int score() {
    int cnt=0,flag=1;
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            if (ch[i][j]==0) cnt++;
    flag=(cnt&1)?-1:1;
    for (int i=0;i<3;i++)
        if (ch[i][0]&&ch[i][0]==ch[i][1]&&ch[i][1]==ch[i][2])   return flag*(cnt+1);
    for (int i=0;i<3;i++)
        if (ch[0][i]&&ch[0][i]==ch[1][i]&&ch[1][i]==ch[2][i])   return flag*(cnt+1);
    if (ch[0][0]&&ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2]) return flag*(cnt+1);
    if (ch[0][2]&&ch[0][2]==ch[1][1]&&ch[1][1]==ch[2][0]) return flag*(cnt+1);
    if (cnt==0) return 0;
    return INF;
}
