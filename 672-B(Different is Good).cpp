#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i,cnt=0,x=0;
    cin>>n;
    string s;
    cin>>s;
     if(n>26){
    cout<<-1<<endl;
    return 0;
     }
    sort(s.begin(),s.end());
    for(i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            cnt++;
    }
        cout<<cnt<<endl;
    return 0;
}
