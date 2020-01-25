#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int length(int n)
{
    int res = 1;
    while(1)
    {
        if(n == 1) return res;
        if(!(n % 2))
        {
            n /= 2;
            res++;
        }
        else if(n > 1 && (n % 2))
        {
            n = 3 * n + 1;
            res++;
        }
    }
}
int main()
{
    int l, r;
    while(cin>>l>>r)
    {
        int mx = 0, flag = 0;
        if(l > r)
        {
            swap(r, l);
            flag++;
        }
        for(int i = l; i <= r; i++)
        {
            int len = length(i);
            if(len > mx) mx = len;
        }
        if(flag) swap(l, r);
        cout<<l<<" "<<r<<" "<<mx<<endl;
    }

    return 0;
}
