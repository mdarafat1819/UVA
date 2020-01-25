#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    while(1)
    {
        int k, m, n;
        cin>>k;
        if(k == 0) break;
        cin>>n>>m;
        while(k--)
        {
            int x, y;
            cin>>x>>y;
            if(((n == x)) || (m == y)) cout<<"divisa"<<endl;
            else if(x > n && y > m) cout<<"NE"<<endl;
            else if(x > n && y < m) cout<<"SE"<<endl;
            else if(x < n && y < m) cout<<"SO"<<endl;
            else if(x < n && y > m) cout<<"NO"<<endl;
        }
    }
    return 0;
}
