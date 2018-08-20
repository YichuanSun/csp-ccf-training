#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin>>n;
    int n1=n/50,y1=n%50;
    int n2=y1/30,y2=y1%30;
    int n3=y2/10;
    cout<<n1*7+n2*4+n3<<endl;
    return 0;
}
