#include <bits/stdc++.h>
#define N 2600
#define M 1500
using namespace std;
struct dd{
    int x1,y1,x2,y2;
}info[15];
int blanket[N][M];
int main()  {
    int n,m,x1,x2,y1,y2;
    scanf("%d%d",&n,&m);
    dd ndd;
    for (int k=1;k<=n;k++)   {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        ndd.x1=x1,ndd.x2=x2,ndd.y1=y1,ndd.y2=y2;
        info[k]=ndd;
        for (int i=x1;i<=x2;i++)
            for (int j=y1;j<=y2;j++)
                blanket[i][j]=k;
    }
    for (int i=0;i<m;i++)   {
        scanf("%d%d",&x1,&y1);
        if (blanket[x1][y1])    {
            int now=blanket[x1][y1];
            for (int i=info[now].x1;i<=info[now].x2;i++)
                for (int j=info[now].y1;j<=info[now].y2;j++)
                    blanket[i][j]=now;
            printf("%d\n",now);
        }
        else    printf("IGNORED\n");
    }
    return 0;
}
