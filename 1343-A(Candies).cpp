#include<bits/stdc++.h>
#define sz 1000000000
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
      long long n,x=3;
      cin>>n;


      while(n%x!=0)
      {
       x=(2*x)+1;
      }
      cout<<(n/x)<<endl;



  }


return 0;
}
