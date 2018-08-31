#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
map<int,int> mmp;
vector<pair<int,int> > ans;
bool cmp(pii a,pii b)   {
    if (a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}
int main()  {
    int n,tmp;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>tmp;
        mmp[tmp]++;
    }
    map<int,int>::iterator it1=mmp.begin();
    for (;it1!=mmp.end();it1++)
        ans.push_back(*it1);
    sort(ans.begin(),ans.end(),cmp);
    cout<<ans[0].first<<' '<<ans[0].second<<endl;
    for (unsigned i=1;i<ans.size();i++)
        cout<<ans[i].first<<' '<<ans[i].second<<endl;
    return 0;
}

