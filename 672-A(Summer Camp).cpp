#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string num;
    num+='1';
    int n;
    cin>>n;
    for(int i=0;i<=1001;i++)
    {
        num+=to_string(i);
    }
    cout<<num[n+1]<<endl;

    return 0;

}
