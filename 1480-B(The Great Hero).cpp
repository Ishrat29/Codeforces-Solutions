#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
      ll t;
      cin>>t;
      while(t--){
            ll A, B, n, x,i,y=0;
            cin>>A>>B>>n;
            ll a[n],b[n];
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            for(i=0;i<n;i++){
                cin>>b[i];
            }
            for(i=0;i<n;i++)
            {
                if(b[i]%A==0) x=b[i]/A;
                else x=(b[i]/A)+1;
                B-=x*a[i];
            }
                if(B>=0){
                    cout<<"YES"<<endl;
                    continue;
                }
            for(i=0;i<n;i++){
                if(B+a[i]>0)
                {
                    y=1;
                    break;
                }
            }
            if(y==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

      }
    return 0;
}
