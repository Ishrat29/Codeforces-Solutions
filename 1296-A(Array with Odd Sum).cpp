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
        ll n,d,x=0,i,m=0,k=0;
        cin>>n;
        ll a[n];
        f(i, n){
        cin>>a[i];
        x+=a[i];
        }
        if(x%2==1)cout<<"YES"<<endl;
        else
        {
            f(i, n)
            {
                if(a[i]%2==0) m++;
                else k++;
            }
            if(m>=1 && k>=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
   return 0;
}
