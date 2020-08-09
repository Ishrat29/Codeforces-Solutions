#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i;
    cin>>s>>n;
    pair<int,int> x[n*2];
    for(i=0;i<n;i++)
    {
        cin>>x[i].first>>x[i].second;}
        sort(x,x+n);
        int sum=s;

        for(i=0;i<n;i++)
    {
        if(sum<=x[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
     else {
            sum=sum+x[i].second;}

    }
    cout<<"YES"<<endl;



    return 0;
}
