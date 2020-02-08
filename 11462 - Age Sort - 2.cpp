#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(!n) break;
        int age[n];
        for(int i = 0; i < n; i++) scanf("%d", &age[i]);
        sort(age, age + n);
        for(int i = 0; i < n; i++)
            {
                if(i == n - 1) printf("%d\n", age[i]);
                else printf("%d ", age[i]);
            }
    }

    return 0;
}

