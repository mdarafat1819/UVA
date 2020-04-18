#include <bits/stdc++.h>

using namespace std;

int bigMod(int x, int y, int n)
{
    if(y == 0) return 1 % n;
    int ans = bigMod(x, y / 2, n);
    ans = (ans * ans) % n;
    if(y % 2) ans = (ans * x) % n;
    return ans;
}
int main()
{
    int c, x, y, n;
    cin>>c;
    while(c--)
    {
        cin>>x>>y>>n;
        cout<<bigMod(x, y, n)<<endl;
    }
    cin>>x;
    return 0;
}
