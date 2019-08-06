#include <bits/stdc++.h>
using namespace std;

int main()  {
    int r,y,g,n,k,t,ans=0;
    scanf("%d%d%d%d",&r,&y,&g,&n);
    for (int i=0;i<n;i++)   {
        scanf("%d%d",&k,&t);
        switch(k)   {
            case 0: ans+=t;break;
            case 1: ans+=t;break;
            case 2: ans+=t+r;break;
            default: ;
        }
    }
    printf("%d\n",ans);
    return 0;
}
