#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}
int main()
{
    int sum = 0, n;
    while(1)
    {
        cin>>n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++)
        {
            for(int j = i + 1; j <= n; j++)
                sum += gcd(i, j);
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
