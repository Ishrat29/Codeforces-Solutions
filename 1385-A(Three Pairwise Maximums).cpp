#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    int a[3];
    while(t--)
    {
        for(int i=0;i<3;i++)
        cin>>a[i];
        sort(a,a+3);
        if(a[1]!=a[2])
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
    }
   return 0;
}
