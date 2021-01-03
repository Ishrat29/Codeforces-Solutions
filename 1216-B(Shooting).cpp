#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll n,i,j,s=0,k;
    cin>>n;
    vector< pair <int,int> >v;
    ll a[n];
    f(i, n)
    cin>>a[i];
    f(i, n)
    {
        v.push_back( make_pair(a[i], i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    f(i, n)
    {
        k=(((v[i].first)*i)+1);
        s+=k;
    }
    cout<<s<<endl;
    f(i, n)
    {
        cout<<v[i].second+1<<" ";
    }
    cout<<endl;
    return 0;
}
