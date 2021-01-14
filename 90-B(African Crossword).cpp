#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll n,m,i,j,k,l;
    cin>>n>>m;
    char a[101][101];
    f(i, n)
    {
        f(j, m)
        {
            cin>>a[i][j];
        }
    }
    f(i, n)
    {
        f(j, m)
        {
            bool g=true;
            f(k, m)
            {
                if(k!=j)
                {
                    if(a[i][j]==a[i][k])
                      g=false;
                }
            }
            f(l, n)
            {
                if(l!=i)
                {
                    if(a[i][j]==a[l][j])
                      g=false;
                }
            }

            if(g)
                cout<<a[i][j];
        }
    }
    cout<<endl;
   return 0;
}
