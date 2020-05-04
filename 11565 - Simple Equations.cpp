#include <bits/stdc++.h>

using namespace std;

vector <int> divisors(int b)
{
    vector <int> d;
    for(int i = 1; i * i <= b; i++)
    {
        if(i * i == b)
        {
            d.push_back(i);
            d.push_back(-i);
        }
        else if(!(b % i))
        {
            d.push_back(i), d.push_back(b / i);
            d.push_back(-i), d.push_back(- b / i);
        }
    }
    return d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, idx = 0, flag = 0;
        cin>>a>>b>>c;
        vector <int> d = divisors(b);
        idx = d.size();
        for(int i = 0; i < idx; i++)
        {
            for(int j = 0; j < idx; j++)
            {
                for(int k = 0; k < idx; k++)
                {
                    if((d[i] != d[j]) && (d[j] != d[k]) && (d[i] != d[k]))
                    {
                        int t1 = d[i] + d[j] + d[k];
                        int t2 = d[i] * d[i] + d[j] *  d[j] + d[k] * d[k];
                        if((a == t1) && (c == t2))
                        {
                            int t[3];
                            t[0] = d[i], t[1] = d[j], t[2] = d[k];
                            sort(t, t + 3);
                            cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
                            flag = 1;
                        }
                        if(flag) break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag) cout<<"No solution."<<endl;
    }
    return 0;
}
