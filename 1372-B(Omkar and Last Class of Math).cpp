#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,flag=0,x,i;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
       else{
         for(i=3;i<=sqrt(n);i++)
         {
             if(n%i==0){
                x=i;
                flag=1;
                break;
               }
         }
         if(flag==1)
            cout<<(n/x)<<" "<<(n-(n/x))<<endl;
            else
            cout<<1<<" "<<n-1<<endl;
       }
    }
    return 0;
}
