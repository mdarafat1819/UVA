#include <iostream>

using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        long long int ta = 0;
        if(a == "0") break;
        for(int i = 0; i < a.length(); i++)
        {
            ta = ta * 10 + (a[i] - '0');
            ta = ta % 17;
        }
        if(ta == 0) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}

