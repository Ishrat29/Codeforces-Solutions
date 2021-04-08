#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
   ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        set<int>s;
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            if(s.count(y))
                v.push_back(y);
            s.insert(y);

        }
        set<int>::iterator it;
        for(it=s.begin(); it!=s.end(); it++)
        {
            cout<<*it<<" ";
        }
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
