#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,i;
        cin>>n>>k;
       if(n==k) cout<<1<<endl;
       else if(n==1) cout<<k<<endl;
       else if(n<k){
        if(k%n==0) cout<<k/n<<endl;
        else cout<<(k/n)+1<<endl;
       }
       else if(n>k)
       {
           if(n%k==0) cout<<1<<endl;
           else cout<<2<<endl;
       }
    }
   return 0;
}
