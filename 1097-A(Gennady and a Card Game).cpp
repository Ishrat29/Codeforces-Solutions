#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,x=0;
    string a;
    for(i=1; i<6; i++)
    {
        cin>>a;
        if(a[0]==s[0])
        {
            x=1;
            break;
        }
        else if(a[1]==s[1])
        {
            x=1;
            break;
        }
    }
    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
