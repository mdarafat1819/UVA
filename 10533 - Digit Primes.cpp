#include <bits/stdc++.h>

#define SIZE 1000001

using namespace std;

bool prime[SIZE];
bool sum[SIZE];
int ans[SIZE];

int digitSum(int n)
{
    int s = 0;
    while(n)
    {
        s += (n % 10);
        n /= 10;
    }
    return s;
}
void sieve()
{
    for(int i = 3; i * i < SIZE; i += 2)
        if(!prime[i])
            for(int j = i * i; j < SIZE; j += 2 * i)
                prime[j] = true;
    for(int i = 3; i < SIZE; i += 2)
        {
            int ds = digitSum(i);
            if(!prime[i] && !prime[ds] && (ds == 2 || (ds % 2)))
                sum[i] = true;
        }
    sum[2] = true;
}
int main()
{
    sieve();
    ans[2] = 1;
    for(int i = 3; i < SIZE; i += 2)
    {

        if(!(prime[i]) && sum[i])
            ans[i] = ans[i-1] + 1;
        else ans[i] = ans[i-1];
        ans[i + 1] = ans[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<ans[b] - ans[a-1]<<endl;
    }
    return 0;
}
