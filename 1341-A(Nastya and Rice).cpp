#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,a,b,c,d;
      int x,y,l,m;
      cin>>n>>a>>b>>c>>d;
      x=(a-b)*n;
      y=abs(a+b)*n;
      l=c+d;
      m=c-d;

      if(l>=x && m<=y)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;

  }

return 0;
}
