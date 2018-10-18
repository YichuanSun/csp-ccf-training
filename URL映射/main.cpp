#include <bits/stdc++.h>
using namespace std;

vector<string> vst,label,cse;
string tt1,tt2;

int main(){
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)   {
        cin>>tt1>>tt2;
        vst.push_back(tt1);
        label.push_back(tt2);
    }
    for (int i=0;i<m;i++)   {
        cin>>tt1;
        cse.push_back(tt1);
    }
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            if (match(vst[i],cse[i])){
                cout<<label[i]<<' ';
                cout<<
                break;
            }
        }
    }
    return 0;
}
