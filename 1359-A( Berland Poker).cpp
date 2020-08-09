#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x=(n/k);
        int v=min(x,m);
        int d=(m-v+k-2)/(k-1);
        cout<<v-d<<endl;
    }
return 0;
}
