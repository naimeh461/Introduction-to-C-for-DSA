#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    
    int mx=INT_MIN,mn=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        mx = max(mx, arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        mn = min(mn, arr[i]);
    }
    cout << mn << " " << mx;
}