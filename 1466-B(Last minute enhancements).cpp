#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,d,x=0,i,m=0;
        cin>>n;
        set<int>s;
        f(i, n)
        {
            cin>>a;
            if(s.count(a)) a++;
            s.insert(a);
        }

        cout<<s.size()<<endl;

    }
   return 0;
}
