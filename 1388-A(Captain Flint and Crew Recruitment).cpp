#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<31)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n==31 || n==37 || n==41 || n==46)
                cout<<6<<" "<<10<<" "<<14<<" "<<(n-30)<<endl;
            else
                cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
        }
    }
    return 0;
}
