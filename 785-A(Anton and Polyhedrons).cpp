#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    string s,s1="Tetrahedron",s2="Cube",s3="Octahedron",s4="Dodecahedron",s5="Icosahedron";
    for(int i=0;i<n;i++){
        cin>>s;
       if(s==s1)
        x=x+4;
       else if(s==s2)
         x=x+6;
       else if(s==s3)
         x=x+8;
       else if(s==s4)
         x=x+12;
       else if(s==s5)
         x=x+20;

        }

    cout<<x<<endl;
    return 0;
}
