#include <bits/stdc++.h>
#define N 1005
using namespace std;
typedef pair<int,int> pii;
int t;
map<int,int> mp;
vector<pii> v;
bool cmp(pii a,pii b)   {
    if (a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   {
        scanf("%d",&t);
        mp[t]++;
    }
    map<int,int>::iterator it1=mp.begin();
    for (;it1!=mp.end();it1++)  v.push_back(*it1);
    sort(v.begin(),v.end(),cmp);
    printf("%d\n",v[0].first);
    return 0;
}
