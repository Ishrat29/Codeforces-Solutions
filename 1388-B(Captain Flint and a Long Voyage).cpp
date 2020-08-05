#include<bits/stdc++.h>
#define ll long long int
#define vll vector ll
using namespace std;
int main()
{
    int t,i,x;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0)
        {
            x=n/4;
            for(i=0; i<(n-x); i++)
            {
                cout<<9;
            }
            for(i=0; i<x; i++)
            {
                cout<<8;
            }
            cout<<endl;
        }
        else
        {
            x=(n/4)+1;
            for(i=0; i<(n-x); i++)
            {
                cout<<9;
            }
            for(i=0; i<x; i++)
            {
                cout<<8;
            }
            cout<<endl;
        }

    }
    return 0;
}
