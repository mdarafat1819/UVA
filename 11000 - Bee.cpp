#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n == -1) break;
        if(n == 0) cout<<"0 1"<<endl;
        else
        {
            long long int m = 0, f = 0, temp;
            for(int i = 1; i <= n; i++)
            {
                temp = m;
                m = m + f + 1;
                f = temp;
            }
            cout<<m<<" "<<m + f + 1<<endl;
        }
    }
    return 0;
}
