#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1){
        cout<<1<<endl; }
        else{
        int x=n*m;
        if(x%2==0)
            cout<<(x/2)<<endl;
        else
            cout<<((x/2)+1)<<endl;

    }
    }

    return 0;
}
