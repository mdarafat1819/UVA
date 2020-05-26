#include <bits/stdc++.h>

using namespace std;

string mul(string num1, string num2)
{
    int len1= num1.length(), len2 = num2.length(), k, carry;
    string ans, mul;
    for(int i = 0; i < len1 + len2; i++) ans.push_back('0');
    for(int i = len2-1; i >= 0; i--)
    {
        k = len2 - (i + 1), carry = 0;
        for(int j = len1-1; j >= 0; j--)
        {
            int m = (num2[i]-'0') * (num1[j]-'0') + carry + (ans[k]-'0');
            if(m > 9) carry = m / 10, m = m % 10;
            else carry = 0;
            ans[k] = m + '0', k++;
        }
        if(carry) ans[k] = carry + '0', k++;
    }
    for(int i = k-1; i >= 0; i--) mul.push_back(ans[i]);
    return mul;
}
string i_to_s(int n)
{
    string res;
    while(n) res.push_back(n % 10 + '0'), n /= 10;
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string fact[367];
    fact[1] = "1";
    for(int i = 2; i <= 366; i++) fact[i] = mul(fact[i-1], i_to_s(i));
    int n;
    while(scanf("%d", &n) == 1 && n)
    {
        int cnt[10] = {0};
        for(int i = 0; i < fact[n].length(); i++) cnt[fact[n][i] - '0']++;
        printf("%d! --\n", n);
        for(int i = 0; i < 10; i++)
        {
            if(i == 5) printf("\n");
            if(i && (i != 5)) printf("    ");
            else printf("   ");
            printf("(%d)%5d", i, cnt[i]);
        }
        puts("");
    }
    return 0;
}
