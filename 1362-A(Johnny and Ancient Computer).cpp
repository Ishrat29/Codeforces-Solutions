#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x=0;
        cin>>a>>b;
        if(a<b)
        {
            swap(a,b);

        }
         while(b<a)
            {
               if(b*8<=a)
               {
                   b*=8;
               }
               else if(b*4<=a)
               {
                   b*=4;
               }
               else if(b*2<=a)
               {
                   b*=2;
               }
               else
               {
                   break;
               }
               x++;
            }
            if(a==b)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
    }
}

/*10
10 5
11 44
17 21
1 1
96 3
2 128
1001 1100611139403776
1000000000000000000 1000000000000000000
7 1
10 8
*/

/*1
1
-1
0
2
2
14
0
-1
-1
*/
