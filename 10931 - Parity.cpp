#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string binary;
        if(!n) break;
        int sum = 0;
        while(n)
        {
            sum += (n % 2);
            binary.push_back(n % 2 + '0');
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        cout<<"The parity of "<<binary<<" is "<<sum<<" (mod 2)."<<endl;
    }
    return 0;
}
