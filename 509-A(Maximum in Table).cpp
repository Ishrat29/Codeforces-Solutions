#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n+1][n+1],i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || j==1)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n]<<endl;
    return 0;
}
