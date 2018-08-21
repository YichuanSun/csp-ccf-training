#include <bits/stdc++.h>
using namespace std;
struct op{
    int key,time;
    bool con;   //1表示存，0表示取
};
bool cmp(op a,op b) {
    if (a.time==b.time) {
        if (a.con==b.con)   return a.key<b.key;
        return a.con>b.con;
    }
    return a.time<b.time;
}

vector<op> ops;
int box[1005],des[1005];
int main()  {
    int n,k,te;
    op nop;
    priority_queue<int,vector<int>,greater<int> > q;
    cin>>n>>k;
    for (int i=0;i<=n;i++)  box[i]=des[i]=i;
    for (int i=0;i<k;i++)   {
        cin>>nop.key>>nop.time>>te;
        nop.con=0;
        ops.push_back(nop);
        nop.con=1,nop.time+=te;
        ops.push_back(nop);
    }
    sort(ops.begin(),ops.end(),cmp);
    //for (unsigned i=0;i<ops.size();i++)
    //    cout<<ops[i].time<<' '<<ops[i].key<<' '<<ops[i].con<<endl;
    for (unsigned i=0;i<ops.size();i++) {
        //con的true表示存，false表示取
        if (ops[i].con==false)  {
            //cout<<"keyout:\t"<<des[ops[i].key]<<endl;
            box[des[ops[i].key]]=0;
            q.push(des[ops[i].key]);
        }
        else if (ops[i].con==true)  {
            des[ops[i].key]=q.top();
            //cout<<"keyin:\t"<<des[ops[i].key]<<endl;
            q.pop();
            box[des[ops[i].key]]=ops[i].key;
        }
    }
    cout<<box[1];
    for (int i=2;i<=n;i++)   cout<<' '<<box[i];
    cout<<endl;
    return 0;
}
