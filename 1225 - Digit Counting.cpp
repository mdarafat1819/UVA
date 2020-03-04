#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, res[10] = {0};
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            int temp = i;
            while(temp)
            {
                res[(temp % 10)]++;
                temp /= 10;
            }
        }
        for(int i = 0; i < 9; i++)
            cout<<res[i]<<" ";
        cout<<res[9]<<endl;
    }
    return 0;
}
