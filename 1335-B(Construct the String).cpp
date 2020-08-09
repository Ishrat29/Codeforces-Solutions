#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long  n,a,b;

        string s1;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {

        char d=97+(i%b);

        s1+=d;
        }
        cout<<s1<<endl;
    }
}
