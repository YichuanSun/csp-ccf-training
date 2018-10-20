#include <bits/stdc++.h>
#define N 105
using namespace std;
string lim[N],lims[N][N],limname[N];    //lim是第i个规则字符串，lims是第i个规则字符串的拆分，limname是对应字符串的名字
string now,nows[N];                     //nows是当前被检索字符串的拆分
bool isop[N],iso;                    //isop判断规则末尾有无斜杠，iso判断地址末尾有无斜杠
int limcnt[N],nowcnt;                   //limcnt计数规则的拆分后项数，nowcnt计数当前被检索字符串的拆分后项数
void stcut(string ori,string cut[],bool& is,int&num);
bool match(int j,int nc,string& a);
string isnum(string s);
int main()  {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)   {
        cin>>lim[i]>>limname[i];
        stcut(lim[i],lims[i],isop[i],limcnt[i]);
    }
    for (int i=0;i<m;i++)   {
        cin>>now;iso=0;             //注意此处将iso置0
        stcut(now,nows,iso,nowcnt);
        string ans;
        int f=0;
        for (int j=0;j<n;j++)   {
            if (match(j,nowcnt,ans)) {
                string ss=limname[j]+ans;
                cout<<ss<<endl;
                f=1;break;
            }
        }
        if (f==0)   cout<<404<<endl;
    }
    return 0;
}

//nows是当前字符串，j是当前的判定模块序号，nc是当前字符串切分后的项数，a是可能的跟在标签后面的答案字符串
bool match(int j,int nc,string& a)  {
    a="";
    int p1=0,p2=0;
    while (p1<nc&&p2<limcnt[j]) {
        if (nows[p1]==lims[j][p2])   ;
        else if (lims[j][p2]=="<int>")    {
            string st=isnum(nows[p1]);
            if (st=="") return 0;
            else    a+=' '+st;
        }
        else if (lims[j][p2]=="<path>") {
            a+=' '+nows[p1++];
            while (p1<nc)   a+='/'+nows[p1++];
            if (iso)    a+='/';
            return 1;
        }
        else if (lims[j][p2]=="<str>")  a+=' '+nows[p1];
        else return 0;
        p1++,p2++;
    }
    if (p1<nc||p2<limcnt[j])    return 0;
    if (isop[j]^iso)    return 0;
    return 1;
}

//ori是原始字符串，cut是切割后的分块，is是判断最后有无'/',num是切分后的项数
void stcut(string ori,string cut[],bool& is,int& num){
    int len=ori.size();
    string ss;
    num=0;
    if (ori[len-1]=='/')    is=1;
    for (int i=0;i<(int)ori.size();i++)
        if (ori[i]=='/')    ori[i]=' ';
    stringstream in(ori);
    while (in>>ss)    cut[num++]=ss;;
}

string isnum(string s)  {
    string ans="";
    int ok=0;
    for (int i=0;i<(int)s.size();i++)   {
        if (s[i]<'0'||s[i]>'9') return "";
        else if (ok||(s[i]>'0'&&s[i]<='9')) ans+=s[i],ok=1;
    }
    return ans;
}
