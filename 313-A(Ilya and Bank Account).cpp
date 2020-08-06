#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unsigned long long int i,m;
    m=s.size();

    if(s[0]!='-')
    {
        cout<<s<<endl;
    }
    else
    {
        if((m==3) && (s[1]=='0'||s[2]=='0'))
        {
            cout<<0;
            return 0;
        }
        else if(s[m-1]>=s[m-2])
        {
            for(i=0; i<m-1; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(s[m-2]>s[m-1])
        {
            for(i=0; i<m-2; i++)
            {
                cout<<s[i];
            }

            cout<<s[m-1]<<endl;
        }
    }
    return 0;
}
