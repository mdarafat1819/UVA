#include <iostream>

using namespace std;

int main()
{
    string str;
    int cs = 1;
    while(1)
    {
        cin>>str;
        if(str == "*") break;
        if(str == "Hajj") cout<<"Case "<<cs<<": "<<"Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<cs<<": "<<"Hajj-e-Asghar"<<endl;
        cs++;
    }

    return 0;
}
