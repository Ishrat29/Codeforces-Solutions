#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,q,i,cnt=0;
    cin>>n;
    vector<int> v;

    for( i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    cin>>q;
    long long m;
    for(i=0;i<q;i++)
    {
        cin>>m;
        cnt=upper_bound(v.begin(),v.end(),m)-v.begin();
           // cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}
