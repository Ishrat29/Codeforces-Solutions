#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;


    if(n%2==0 && m%2==0)
        cout<<"Malvika"<<endl;
    else if(n%2!=0 && m%2!=0)
        cout<<"Akshat"<<endl;
    else {
         x=min(n,m);
    if(x%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    }

    return 0;
}
