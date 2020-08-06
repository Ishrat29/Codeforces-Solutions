#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    int a[n],b[n];
    for(i=1; i<=n; i++)
        cin>>a[i]>>b[i];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
