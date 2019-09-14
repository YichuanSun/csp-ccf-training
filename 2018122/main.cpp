#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//先是红绿灯顺序搞错了，再是黄灯后需要接红灯，再是longlong型，服了
int main()	{
	ll r,y,g,n,k,t,tt=0;
	scanf("%lld%lld%lld%lld",&r,&y,&g,&n);
	ll cyc=r+y+g;
	for (ll i=0;i<n;i++)	{
		scanf("%lld%lld",&k,&t);
		if (k==0)	tt+=t;
		else if (k==1)	{
			ll temp=tt+r-t;
			if (temp%cyc<=r)
				tt+=(r-temp%cyc);
			else if (temp%cyc>=r+g)
				tt+=(cyc-temp%cyc+r);
		}
		else if (k==2)	{
			ll temp=tt+cyc-t;
			if (temp%cyc<=r)
				tt+=(r-temp%cyc);
			else if (temp%cyc>=r+g)
				tt+=(cyc-temp%cyc+r);
		}
		else if (k==3)	{
			ll temp=tt+r+g-t;
			if (temp%cyc<=r)
				tt+=(r-temp%cyc);
			else if (temp%cyc>=r+g)
				tt+=(cyc-temp%cyc+r);
		}
		//cout<<"Now Round: "<<i+1<<'\t'<<tt<<endl;
	}
	printf("%lld\n",tt);
	return 0;
}
