#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag;
    while(1)
    {
        cin>>n;
        if(!n) break;
        flag = 0;
        for(int i = 1; i < 60; i++)
        {
            for(int j = 1; j <= i; j++)
                if( (i*i*i - j*j*j == n) || (j*j*j - i*i*i == n) )
                {
                    cout<<i<<" "<<j<<endl;
                    flag++;
                    break;
                }
            if(flag) break;
        }
        if(!flag) cout<<"No solution"<<endl;
    }

    return 0;
}
