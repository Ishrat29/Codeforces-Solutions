#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,i,cnt=0,x;
    cin>>n>>k;
    int y[n],a[n];
    for(i=0;i<n;i++){
        cin>>y[i];
        a[i]=5-y[i];
       }
       for(i=0;i<n;i++){
        if(a[i]>=k)
            cnt++;
       }
       x=(cnt/3);
       cout<<x<<endl;
    return 0;
}

