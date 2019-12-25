#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double ma, mb, mc;
    while(cin>>ma>>mb>>mc)
    {
        if((ma + mb <= mc) || (ma + mc <= mb) || (mb + mc <= ma) )
        {
            printf("-1.000\n");
             continue;
        }
        double sm = (ma + mb + mc) / 2.0;
        double area = (4/3.0) * (sqrt(sm*(sm - ma)*(sm - mb)*(sm - mc)));
        printf("%.3lf\n", area);
    }

    return 0;
}
