#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c,d,x,y,z;
        cin>>a>>b>>c>>d;

       /* if((a+b)>d)
        {
            cout<<a<<" "<<b<<" "<<d<<endl;
        }
        else if((a+b)==d)
        {
            cout<<a<<" "<<b-1<<" "<<d<<endl;
        }
        else if((a+b)<d)
        {
            x=d-(a+b);
            if((b+x)<=c)
            cout<<a+1<<" "<<b+x<<" "<<d<<endl;
            else
            {
                m=(b+x)-c;
                cout<<a+1+m<<" "<<b<<" "<<d<<endl;
            }
        } */

      /*  x=((a+b)/2);
        y=((b+c)/2);
        z=((c+d)/2);
        if((x+y)>z)
           cout<<x<<" "<<y<<" "<<z<<endl;
        else
        {
            x=((a+b)/3);
            y=(b+c)/3;
            z=(c+d)/3;
            cout<<x<<" "<<y<<" "<<z<<endl;
        } */

        cout<<b<<" "<<c<<" "<<c<<endl;
    }
    return 0;
}
