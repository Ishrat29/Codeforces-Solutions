#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x=0,y=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                break;
            }
           x++;
        }
        for(j=n-1;j>=0;j--)
        {
            if(s[j]=='0')
            {
                break;
            }
           y++;
        }

        if(x+y==n)
        {
            cout<<s<<endl;
        }
        else
        {
             for(i=0;i<=x;i++)
        {
            cout<<"0";
        }
        for(i=0;i<y;i++)
        {
            cout<<"1";
        }
        cout<<endl;
    }
    }
    return 0;
}
