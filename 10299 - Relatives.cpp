#include <bits/stdc++.h>

using namespace std;

#define SIZE 31625

vector <int> primes;
int marked[SIZE];

void sieve()
{
    for(int i = 3; i * i < SIZE; i += 2)
    {
        if(!marked[i])
        {
            for(int j = i * i; j < SIZE; j += 2 * i)
                marked[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3; i < SIZE; i += 2)
        if(!marked[i]) primes.push_back(i);
}

int phi(int n)
{
    if(n == 1) return 0;
    int res = n;
    for(int i = 0; primes[i] * primes[i] <= n && i < primes.size(); i++)
    {
        if(!(n % primes[i]))
        {
            while(!(n % primes[i])) n /= primes[i];
            res -= (res / primes[i]);
        }
    }
    if(n > 1) res -= (res / n);
    return res;
}

int main()
{
    sieve();
    int n;
    while(1)
    {
        cin>>n;
        if(!n) break;
        cout<<phi(n)<<endl;
    }
    return 0;
}
