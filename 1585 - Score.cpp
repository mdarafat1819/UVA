#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int sum = 0, cnt = 0;
        for(int i = 0; i  < str.length(); i++)
        {
            if(str[i] == 'O') cnt++;
            else
            {
                sum += ((cnt * (cnt + 1)) / 2);
                cnt = 0;
            }
        }
        if(cnt) sum += ((cnt * (cnt + 1)) / 2);
        cout<<sum<<endl;
    }

    return 0;
}
