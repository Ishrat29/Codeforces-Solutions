#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
        ll n,x,i,j;
        cin>>n;
        string s,s1;
        cin>>s;
        s1="0000000000";
        for(int i=0;i<n;i++)
	{
		if(s[i]=='L')
		{
			for(int j=0;j<10;j++)
			  if(s1[j]=='0')
			  {
			   s1[j]='1';
			   break;
		      }
		}
		else if(s[i]=='R')
		{
			for(int j=9;j>=0;j--)
			  if(s1[j]=='0')
			  {
			   s1[j]='1';
			   break;
		      }
		}
		else
		{
			ll k=(s[i]-'0');
			s1[k]='0';
		}
	}
        cout<<s1<<endl;

   return 0;
}
