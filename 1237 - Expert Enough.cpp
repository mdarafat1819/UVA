#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t, d, q;
    cin>>t;
    while(t--)
    {
        cin>>d;
        string m[d];
        int l[d], h[d];
        for(int i = 0; i < d; i++) cin>>m[i]>>l[i]>>h[i];
        cin>>q;
        while(q--)
        {
            int p, flag = 0, idx;
            cin>>p;
            for(int i = 0; i < d; i++)
                if((p>=l[i]) && (p<=h[i]))
                {
                        flag++;
                        idx = i;
                }
            if(flag == 1) cout<<m[idx]<<endl;
             else  cout<<"UNDETERMINED"<<endl;
        }
        if(t == 0) continue;
        cout<<endl;
    }
    return 0;
}
