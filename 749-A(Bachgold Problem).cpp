#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;

    if(n%2==0)
    {
        x=(n/2);
        cout<<x<<endl;
        while(x--){
            cout<<"2"<<" ";
        }
        cout<<endl;
    }
    else
    {
        x=(n/2)-1;
        cout<<x+1<<endl;
        cout<<3<<" ";
        while(x--){
            cout<<"2"<<" ";
        }
       cout<<endl;
    }
return 0;
}
