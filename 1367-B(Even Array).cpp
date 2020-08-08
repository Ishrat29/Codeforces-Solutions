#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x=0,y=0,m;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0&&i%2==1)
                x++;
            else if(a[i]%2==1&&i%2==0)
                y++;

            }

         if(x==y)
         cout<<x<<endl;
         else
         cout<<-1<<endl;
    }

    return 0;
}
