#include <bits/stdc++.h>
using namespace std;
struct op{
    int key,time;
    bool con;   //1ÊÇ»¹£¬0ÊÇ½è

};
bool cmp(op a,op b) {
    if (a.time==b.time) {
        if (a.con==b.con)   return a.key<b.key;
        return a.con>b.con;
    }
    return a.time<b.time;
}
vector<op> ops;
int box[1005];
int main()  {
    int n,k,tk,tb,te;
    op nop;
    cin>>n>>k;
    for (int i=0;i<=n;i++)  box[i]=i;
    for (int i=0;i<k;i++)   {
        cin>>nop.key>>nop.time>>te;
        nop.con=0;
        ops.push_back(nop);
        nop.con=1,nop.time+=te;
        ops.push_back(nop);
    }
    sort(ops.begin(),ops.end(),cmp);
    for (unsigned i=0;i<ops.size();i++) {
        if (ops[i].con==false)  {

        }
        else if (ops[i].con==true)  {

        }
    }
    return 0;
}
