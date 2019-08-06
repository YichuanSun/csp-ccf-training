#include <bits/stdc++.h>
using namespace std;
int cal(int a);
int r,y,g,n,k,t,tim=0;
int main()  {
    scanf("%d%d%d%d",&r,&y,&g,&n);
    int cycle=r+y+g;
    for (int i=0;i<n;i++)   {
        scanf("%d%d",&k,&t);
        int nowk;
//        cout<<"This time \t"<<i<<' '<<nowk<<endl;
//        cout<<"and nowk=\t"<<cal(nowk)<<endl;
//        cout<<"and tim=\t"<<tim<<endl;
        if (k==0)   tim+=t;
        else if (k==1)  nowk=r;
        else if (k==2)  nowk=r+g+t;
        else nowk=r+t;
        nowk%=cycle;
        if (nowk>=0&&nowk<r)    tim+=r-nowk;
        else if (nowk>=r&&nowk<r+g) ;
        else tim+=r+g+y-nowk+r;
    }
    printf("%d\n",tim);
    return 0;
}
