#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int big_mod(ll a, ll b, ll m)
{
    if(b == 0) return 1 % m;
    ll x = big_mod(a, b / 2, m);
    x = (x * x) % m;
    if(b % 2) x = (x * a) % m;
    return x;
}
int main()
{
    ll b, p, m;
    while(cin>>b>>p>>m) cout<<big_mod(b, p, m)<<endl;
    return 0;
}
