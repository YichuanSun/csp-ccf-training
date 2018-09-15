#include <bits/stdc++.h>
#define N 105
using namespace std;
bool spot[N][N];
int main()  {
    int n,x1,x2,y1,y2,cnt=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for (int i=x1;i<x2;i++)
            for (int j=y1;j<y2;j++)
                spot[i][j]=true;
    }
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            if (spot[i][j]) cnt++;
    printf("%d\n",cnt);
    return 0;
}
