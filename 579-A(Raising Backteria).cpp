#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,k=0;

    cin>>x;
    while(x!=0){
    if(x%2==1)
       k++;
        x=x/2;
    }

        cout<<k<<endl;

        return 0;
}
