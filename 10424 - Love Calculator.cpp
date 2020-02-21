#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int digitSum(int value)
{
    int sum = 0;
    while(value)
    {
        sum += (value % 10);
        value /= 10;
    }
    return sum;
}
int value(string str)
{
    int res = 0, len = str.length();
    for(int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
        if(str[i] >= 'A' && str[i] <= 'Z')
            res += str[i] - 64;
    }
    return res;
}
int main()
{
    string name1, name2;
    while(getline(cin, name1))
    {
        getline(cin, name2);
        int v1 = value(name1);
        int v2 = value(name2);
        while(v1 > 9) v1 = digitSum(v1);
        while(v2 > 9) v2 = digitSum(v2);
        int mx = max(v1, v2);
        int mn = min(v1, v2);
        printf("%.2lf %%\n", (double)mn * 100 / mx);
    }

    return 0;
}
