#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int length(int num)
{
    int c = 0;
    while(num)
    {
        c++;
        num /= 10;
    }
    return c;
}
int isArm(int num)
{
    int temp = num, newNum = 0, p = length(num);
    while(temp)
    {
        int digit = temp % 10;
        temp /= 10;
        newNum += (int)pow((double)digit, p);;
    }
    if(num == newNum) return 1;
    else return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        if(isArm(num)) cout<<"Armstrong"<<endl;
        else cout<<"Not Armstrong"<<endl;
    }

    return 0;
}
