#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int n, cs = 1;
    while(1)
    {
        cin>>n;
        if(n == 0) break;
        int ara[n], sum = 0, cnt = 0, res = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>ara[i];
            sum += ara[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(ara[i] < (sum / n))
                res += ((sum / n) - ara[i]);
        }
        cout<<"Set #"<<cs<<endl;
        cout<<"The minimum number of moves is "<<res<<"."<<endl<<endl;
        cs++;
    }

    return 0;
}
