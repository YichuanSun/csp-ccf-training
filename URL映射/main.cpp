#include <bits/stdc++.h>
#define N 105
using namespace std;
string lim[N],lims[N][N],limname[N];    //lim�ǵ�i�������ַ�����lims�ǵ�i�������ַ����Ĳ�֣�limname�Ƕ�Ӧ�ַ���������
string now,nows[N];                     //nows�ǵ�ǰ�������ַ����Ĳ��
bool isop[N],iso;                    //isop�жϹ���ĩβ����б�ܣ�iso�жϵ�ַĩβ����б��
int limcnt[N],nowcnt;                   //limcnt��������Ĳ�ֺ�������nowcnt������ǰ�������ַ����Ĳ�ֺ�����
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
        cin>>now;iso=0;             //ע��˴���iso��0
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

//nows�ǵ�ǰ�ַ�����j�ǵ�ǰ���ж�ģ����ţ�nc�ǵ�ǰ�ַ����зֺ��������a�ǿ��ܵĸ��ڱ�ǩ����Ĵ��ַ���
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

//ori��ԭʼ�ַ�����cut���и��ķֿ飬is���ж��������'/',num���зֺ������
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
