#include <bits/stdc++.h>

using namespace std;

vector<int> string_to_int(string str)
{
    vector<int> res;
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            while((str[i] != ' ') && str[i] != '\0')
            {
                num = num * 10 + str[i] - '0';
                i++;
            }
            res.push_back(num);
            num = 0;
            i--;
        }
    }
    return res;
}
int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string input;
        getline(cin, input);
        vector <int> num = string_to_int(input);
        int mx_g = 0;
        for(int i = 0; i < num.size(); i++)
        {
            for(int j = i + 1; j < num.size(); j++)
                mx_g = max(mx_g, gcd(num[i], num[j]));
        }
        cout<<mx_g<<endl;
    }
    return 0;
}
