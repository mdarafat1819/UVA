#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    string str[50000];
    int ch;
    int idx = 0;
    while((ch = getchar()) != -1)
    {
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z')
            str[idx].push_back(ch);
        else idx++;
    }
    sort(str, str + idx + 1);
    for(int i = 0; i <= idx; i++)
    {
        if(str[i] != str[i + 1])
        {
            if(str[i] != "")
                cout<<str[i]<<endl;
        }
    }

    return 0;
}
