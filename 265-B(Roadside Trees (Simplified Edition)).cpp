#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,h,i,x;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    x=a[0]+1;

    for(i=0;i<(n-1);i++)
        x=x+((abs(a[i+1]-a[i]))+2);




   cout<<x<<endl;
   return 0;
}
