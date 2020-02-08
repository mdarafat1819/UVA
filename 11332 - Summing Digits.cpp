#include <iostream>

using namespace std;

int digitSum(long long int num)
{
   int sum = 0;
   while(num)
   {
       sum = sum + (num % 10);
       num /= 10;
   }
   return sum;
}
int main()
{
   long long int num;
    while(cin>>num)
    {
        if(!num) break;
        while(num > 9) num = digitSum(num);
        cout<<num<<endl;
    }

    return 0;
}
