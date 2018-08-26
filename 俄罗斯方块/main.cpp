#include <bits/stdc++.h>
using namespace std;
bool graph[20][20],part[5][5],flag;
int main()  {
    int st;
    for (int i=0;i<15;i++)
        for (int j=0;j<10;j++)
            scanf("%d",&graph[i][j]);
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            scanf("%d",&part[i][j]);
    scanf("%d",&st);
    int stx,sty;
    vector<pair<int,int> >  pic;
    for (int j=0;j<4;j++)
        for (int i=0;i<4;i++)   {
            if (part[i][j]==true&&flag==false)  {
                pic.push_back(make_pair(st,0));
                stx=i,sty=j;
                flag=true;
            }
            else if (part[i][j]==true&&flag==true)  {
                pic.push_back(make_pair(st+i-stx,0+j-sty));
            }
        }
    int msz=0;
    for (unsigned i=0;i<pic.size();i++) {
        if (pic[i].second)
    }
    return 0;
}



