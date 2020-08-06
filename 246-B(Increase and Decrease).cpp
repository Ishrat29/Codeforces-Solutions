#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        e=e+a[i];
    }
        if(e%n==0)
            cout<<n<<endl;
        else
            cout<<n-1<<endl;

    return 0;
}
