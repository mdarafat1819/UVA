#include <bits/stdc++.h>

using namespace std;

int upper(int arr[], int l, int r, int x)
{
    int last = r;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(arr[mid] > x) r = mid - 1;
        else if(arr[mid] <= x) l = mid + 1;
    }
    if(l > last) return -1;
    return l;
}
int lower(int arr[], int l, int r, int x)
{
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(arr[mid] < x) l = mid + 1;
        else if(arr[mid] >= x) r = mid - 1;
    }
    return r;
}

int main()
{
    int n;
    cin>>n;
    int arr[n], q, h, lo, up;
    for(int i = 0; i < n; i++) cin>>arr[i];
    cin>>q;
    while(q--)
    {
        cin>>h;
        up = upper(arr, 0, n - 1, h);
        lo = lower(arr, 0, n - 1, h);
        if(lo >= 0) cout<<arr[lo]<<" ";
        else cout<<"X"<<" ";
        if(up > 0) cout<<arr[up]<<endl;
        else cout<<"X"<<endl;
    }
    return 0;
}
