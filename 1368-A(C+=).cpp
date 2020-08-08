#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,x,y,b,n,cnt=0;
        cin>>a>>b>>n;
        x=max(a,b);
        y=min(a,b);
        while(x<=n)
        {
            y=y+x;
            cnt++;
            if(y>n)
                break;
            x+=y;
            cnt++;
            if(x>n)
               break;

        }
      cout<<cnt<<endl;
    }
  return 0;
}
