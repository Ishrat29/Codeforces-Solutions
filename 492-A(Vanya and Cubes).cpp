#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+((i*(i+1))/2);

        if(s==n)
        {
            cout<<i<<endl;
            return 0;
        }
        else if(s>n)
        {
            cout<<i-1<<endl;
            return 0;
        }
    }
}
