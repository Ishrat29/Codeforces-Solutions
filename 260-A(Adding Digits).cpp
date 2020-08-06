#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,m=0,j;
    cin>>a>>b>>n;

        for(i=0; i<10; i++)
        {
            if(((a*10 + i)% b)==0)
            {
                cout<<a*10+i;
                for(j=0; j<n-1; j++)
                {
                    cout<<0;
                }
                return 0;

            }
        }
        cout<<-1<<endl;
        return 0;
    }
