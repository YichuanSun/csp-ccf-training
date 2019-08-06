#include <bits/stdc++.h>
using namespace std;
int cal(int a);
int r,y,g,n,k,t,tim=0;
int main()  {
    scanf("%d%d%d%d",&r,&y,&g,&n);
    int cycle=r+y+g;
    for (int i=0;i<n;i++)   {
        scanf("%d%d",&k,&t);
        int nowk=(tim+t)%cycle;
        cout<<"This time \t"<<i<<' '<<nowk<<endl;
        cout<<"and nowk=\t"<<cal(nowk)<<endl;
        cout<<"and tim=\t"<<tim<<endl;
        tim+=cal(nowk);
    }
    printf("%d\n",tim);
    return 0;
}

int cal(int a)  {
    if (a>=0&&a<r)  return r-a;
    else if (a>=r&&a<r+g)   return 0;
    else    return r+g+y-a+r;
}
