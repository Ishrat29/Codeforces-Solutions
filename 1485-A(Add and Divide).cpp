#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=1; i<(a); i++)
using namespace std;
ll kim(ll a, ll b) {
	if(b == 1)
		return 100000;
	ll x= 0;
	while(a > 0) {
		a /= b;
		x++;
	}
	return x;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b,x=INT_MAX,i;
	   cin >> a >> b;
	   for(i = 0; i < 50; i++) {
		x = min(x, i + kim(a, b + i));
	}
	cout << x << endl;
    }
   return 0;
}
