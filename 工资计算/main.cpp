#include <bits/stdc++.h>
using namespace std;

int sr[]={3500,3500+1500,3500+4500,3500+9000,3500+35000,3500+55000,3500+80000};
int tr[]={3,10,20,25,30,35,45};
const int SIZE=sizeof(sr)/sizeof(int);
int range[SIZE];

int main()  {
    int t,s;
    cin>>t;
    range[0]=sr[0];
    for (int i=1;i<SIZE;i++)    {
        range[i]=range[i-1]+sr[i]-sr[i-1]
            -(sr[i]-sr[i-1])*tr[i-1]/100;
    }
    int i;
    for (i=0;i<SIZE;i++)
        if (t<=range[i])    break;
    s=sr[i-1]+(t-range[i-1])*100/(100-tr[i-1]);
    cout<<s<<endl;
    return 0;
}
