#include <bits/stdc++.h>
using namespace std;
int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int jud[20];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int y,d;
    cin>>y>>d;
    if ((y%4==0&&y%100!=0)||y%400==0)   months[2]=29;
    int i;
    for (i=1;i<13;i++)  {
        jud[i]=jud[i-1]+months[i];
        if (d<=jud[i])   break;
    }
    cout<<i<<endl;
    cout<<d-jud[i-1]<<endl;
    return 0;
}
