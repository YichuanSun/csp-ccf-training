#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    string an=s.substr(0,s.size()-1);
    int sum=0,cnt=1;
    for (int i=0;i<(int)s.size()-2;i++)   {
        if (i!=1&&i!=5) {
            sum+=(s[i]-'0')*cnt;
            cnt++;
        }
    }
    int rt=sum%11,now=s[s.size()-1];
    if (rt==10) {
        if (now=='X')   cout<<"Right"<<endl;
        else    {
            an+='X';
            cout<<an<<endl;
        }
    }
    else {
        if (rt==now-'0')    cout<<"Right"<<endl;
        else {
            an+=rt+'0';
            cout<<an<<endl;
        }
    }
    return 0;
}
