#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a=0,b=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<2*n-1;i++)
        {
            if(i%2==0)
                cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}
