#include <bits/stdc++.h>
#define N 35
using namespace std;
int n,m,ch[N][N],spot[N][N],cnt;
void trave(int i,int j);
int main()  {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>ch[i][j];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            trave(i,j);
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            if (spot[i][j]==0)
                cout<<ch[i][j];
            else    cout<<0;
            if (j!=m-1) cout<<' ';
            else    cout<<endl;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

void trave(int i,int j) {
    for (int a=-2;a<=2;a++) {
        if (a+i<0||a+i>=n||a==0)  continue;
        int mid=(a+i+i)/2;
        if (mid==a+i||mid==i)   continue;
        if (ch[a+i][j]==ch[i][j]&&ch[i][j]==ch[mid][j]) {
            spot[a+i][j]++,spot[i][j]++,spot[mid][j]++;
            cnt++;
        }
    }
    for (int a=-2;a<=2;a++) {
        if (a+j<0||a+j>=m||a==0)  continue;
        int mid=(a+j+j)/2;
        if (mid==a+j||mid==j)   continue;
        if (ch[i][a+j]==ch[i][j]&&ch[i][j]==ch[i][mid]) {
            spot[i][a+j]++,spot[i][j]++,spot[i][mid]++;
            cnt++;
        }
    }
}
