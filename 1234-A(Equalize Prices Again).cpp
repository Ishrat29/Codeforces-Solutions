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
        ll n,i,j,s=0,x;
        cin>>n;
        ll a[n];
        f(i, n){
        cin>>a[i];
        s+=a[i];
        }

        if(s%n==0) cout<<s/n<<endl;
        else cout<<(s/n)+1<<endl;

    }
   return 0;
}
