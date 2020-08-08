#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n,x,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(a[0]!=1)
            cout<<"First"<<endl;
       else
        {
           for(i=0;i<n;i++)
            {
                if(a[i]==1)
                    cnt++;
                 if(a[i]!=1)
                 {
                     break;
                 }
            }
            if(cnt==n && (cnt%2==0))
                cout<<"Second"<<endl;
            else if(cnt==n && (cnt%2!=0))
                cout<<"First"<<endl;
            else if(cnt!=n && (cnt%2==0))
                cout<<"First"<<endl;
            else if(cnt!=n && (cnt%2!=0))
                cout<<"Second"<<endl;
        }

    }
    return 0;
}
