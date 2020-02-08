#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int a, b;
        cin>>a>>b;
        a /= 2;
        if(b % 2) b = b/2 + 1;
        else b /= 2;
        cout<<"Case "<<i<<": "<<(b * b) - (a * a)<<endl;
    }

    return 0;
}
