#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
	 ll t, n, l1,l2,l3, i, j, l, r, k;
     cin>>t;
     while(t--){

     cin>>l1>>l2>>l3;
     if(l1==l2){
            if(l3%2 == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    else if(l1==l3){
            if(l2%2 == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
    else if(l2==l3){
            if(l1%2 == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    else{
        ll x = max(l1,max(l2,l3));
        if(x==l1){
            if(l1-l3 == l2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
       else  if(x==l2){
            if(l2-l3 == l1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x==l3){
            if(l3-l1 == l2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


    }



     }
	return 0;
}
