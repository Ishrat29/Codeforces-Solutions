#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,m,x,r,c,x1=0,y1=0,x2=0,y2=0;
        cin>>n;
        char s[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                cin>>s[i][j];
                if(s[i][j]=='*')
                {
                    if(x1==0&&y1==0)
                    {
                        x1=i; y1=j;
                    }
                    else{ x2=i; y2=j;
                    }
                }
            }
        }
        if(x1!=x2 && y1!=y2){
            s[x1][y2]='*';
			s[x2][y1]='*';
        }
        else if(x1!=x2 && y1==y2)
        {
            if(y1==n-1){
            s[x1][y1-1]='*';
            s[x2][y2-1]='*';
            }
            else{
            s[x1][y1+1]='*';
            s[x2][y2+1]='*';
            }
        }
        else if(x1==x2 && y1!=y2)
        {
            if(x1==n-1){
            s[x1-1][y1]='*';
            s[x2-1][y2]='*';
            }
            else{
            s[x1+1][y1]='*';
            s[x2+1][y2]='*';
            }
        }
        for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<s[i][j];
			}
			cout<<endl;
		}
    }
   return 0;
}
