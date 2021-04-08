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
        ll n,x,m,s=0,k,l,g=0;
        cin>>n;
        m=n;
        while(m>0){
            x=m%10;
            s+=x;
            m/=10;
        }
       k= __gcd(n,s);
      if(k>1) cout<<n<<endl;
      else{
            m=n+1;
      while(m>0){
            l=m%10;
            g+=l;
            m/=10;
        }
       k= __gcd(n+1,g);
      if(k>1) cout<<n+1<<endl;
      else cout<<n+2<<endl;
      }

    }
   return 0;
}
