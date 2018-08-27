#include <bits/stdc++.h>
using namespace std;
bool graph[20][20],part[5][5],flag;
int gh[20],ph[20];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    for (int i=0;i<15;i++)
        for (int j=0;j<10;j++)
            cin>>graph[i][j];
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            cin>>part[i][j];
    cin>>n;
    for (int j=0;j<10;j++)  {
        for (int i=0;i<15;i++)  {
            if (graph[i][j]==true)  {
                gh[j]=i;
                break;
            }
            else if (i==14) gh[j]=i;
        }
    }
    int tmx,tmy,big=0;
    for (int j=0;j<4;j++)   {
        for (int i=0;i<4;i++)   {
            if (flag==false&&part[i][j]==true)  {
                tmx=i,tmy=j;
                flag=true;
                ph[j]=i;
            }
            else if (flag&&part[i][j]==true)    {
                if (i>ph[j])    ph[j]=i;
                if (j>big)  big=j;
            }
        }
    }
    int le=abs(big-tmy);
    for (int j=n;j<n+le;j++)    {
        if ()
    }
    return 0;
}


















//int main()  {
//    int st;
//    for (int i=0;i<15;i++)
//        for (int j=0;j<10;j++)
//            scanf("%d",&graph[i][j]);
//    for (int i=0;i<4;i++)
//        for (int j=0;j<4;j++)
//            scanf("%d",&part[i][j]);
//    scanf("%d",&st);
//    int stx,sty;
//    vector<pair<int,int> >  pic;
//    for (int j=0;j<4;j++)
//        for (int i=0;i<4;i++)   {
//            if (part[i][j]==true&&flag==false)  {
//                pic.push_back(make_pair(st,0));
//                stx=i,sty=j;
//                flag=true;
//            }
//            else if (part[i][j]==true&&flag==true)  {
//                pic.push_back(make_pair(st+i-stx,0+j-sty));
//            }
//        }
//    int msz=0;
//    for (unsigned i=0;i<pic.size();i++) {
//        if (pic[i].second)
//    }
//    return 0;
//}
