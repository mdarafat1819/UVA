#include <iostream>
#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    double a, b, c;
    while(cin>>a>>b>>c)
    {
        double s, ta, R, sun, r, roses, violets;
        s = (a + b + c) / 2;
        ta = s * (s - a) * (s - b) * (s - c);
        ta = sqrt(ta);
        r = ta / s;
        R = a * b * c / (4.0 * ta);
        roses = PI * r * r;
        sun = PI * R * R - ta;
        violets = ta - roses;
        printf("%.4lf %.4lf %.4lf\n", sun, violets, roses);
    }

    return 0;
}
