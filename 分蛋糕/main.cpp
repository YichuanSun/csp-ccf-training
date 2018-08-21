#include <bits/stdc++.h>
using namespace std;
queue<int> cake;
int main()  {
    int n,k,t,cnt=0;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>t;
        cake.push(t);
    }
    while (!cake.empty())   {
        int sum=0;
        while (!cake.empty()&&sum<k)   {
            sum+=cake.front();
            cake.pop();
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
