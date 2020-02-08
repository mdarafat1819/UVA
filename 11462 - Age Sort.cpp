#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(!n) break;
        int age[101] = {0}, idx = 0;
        for(int i = 0; i < n; i++)
        {
            int value;
            scanf("%d", &value);
            age[value]++;
            idx = max(idx, value);
        }
        for(int i = 0; i <= idx; i++)
        {
            if(age[i])
                for(int j = 0; j < age[i]; j++)
                {
                    if((i == idx) && (j == age[i] - 1))
                        printf("%d\n", i);
                    else printf("%d ", i);
                }
        }
    }

    return 0;
}
