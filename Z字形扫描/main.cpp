//思路有点乱，等等再写
#include <bits/stdc++.h>
#define N 505
using namespace std;
vector<int> v;
int matrix[N][N];
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    int i=0,j=0;
    for (int k=0;k<=(n-1)*2;k++) {
        v.push_back(v[i][j]);
        if (k<n-1)  {
            if (!(k&1)) j++;
            else    i++;
            for (int i=0;i<k+1;i++) {
                v.push_back(v[i][j]);

            }
        }
        else if (k>=n-1)    {

        }
    }
    return 0;
}


