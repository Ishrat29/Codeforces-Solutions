#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n'))

            if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
            {
                flag=1;
                break;
            }
        }



    if(flag==1)
        cout<<"NO"<<endl;

    else
        cout<<"YES"<<endl;

    return 0;
}
