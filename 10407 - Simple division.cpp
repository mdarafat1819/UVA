#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

int solve(int arr[], int n)
{
    int temp[n], i, j, g = 0;
    for(i = 1, j = 0; i < n; i++, j++)
        temp[j] = abs(arr[i] - arr[i-1]);
    for(i = 0; i < n - 1; i++) g = gcd(g, temp[i]);
    return g;
}

int main()
{
    int arr[1000], input, idx = 0;
    while(cin>>input && input)
    {
        arr[idx] = input;
        idx++;
        while(1)
        {
            cin>>input;
            if(!input)
            {
                cout<<solve(arr, idx)<<endl;
                break;
            }
            else arr[idx] = input, idx++;
        }
        idx = 0;
    }
    return 0;
}
