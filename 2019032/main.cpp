#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int get_ans (string str) {
    stack <int> s;
    int flag=1;
    for (int i=0;i<str.size();i++) {
        if (str[i]>='0'&&str[i]<='9') s.push( flag*(str[i]-'0'));
        else if (str[i]=='-' || str[i]=='+')  {
            if (str[i]=='-') flag=-1;
            else             flag=1;
        }
        else {
            int x1=s.top(); s.pop();
            i++; // importment !!
            int x2=str[i]-'0';
            if (str[i-1]=='/')  s.push(x1/x2);
            else               s.push(x1*x2);
        }
    }
    int sum=0;
    while (!s.empty()) {
        sum+=s.top();
        s.pop();
    }
    return sum;
}
int main ()
{
    int T; cin>>T;
    while (T--) {
        string str; cin>>str;
        cout<<get_ans(str)<<endl;
    }
    return 0;
}
