#include <bits/stdc++.h>
#define N 50
using namespace std;
int a[N];
int main()	{
	int k=1,sum=0;
	a[0]=1;
	for (k=1;k<N;k++)	{
		scanf("%d",&a[k]);
		if (a[k]==0)	break;
	}
	for (int j=1;j<k;)	{
		if (a[j]==1)	{
			sum++;
			j++;
		}
		else if (a[j]==2)	{
			int plus=2;
			while (a[j]==2)	{
				sum+=plus;
				plus+=2;
				j++;
			}
		}
		else	break;
	}
	printf("%d\n",sum);
	return 0;
}
