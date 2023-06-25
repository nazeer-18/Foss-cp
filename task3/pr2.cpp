// 21161 Shaik Nazeer CSE-B
#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    loop(i,n) cin>>a[i];
    int start = 0, end = n - 1, mid = (start + (end - start) / 2);
    while (start <= end)
    {
        mid = (start + (end - start) / 2);
        if (a[mid] < x)
        {
            start = mid + 1;
        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            break;
        }
    }
    if (start > end && a[mid] != x)
        return 0;
    int cnt = 0, i = mid + 1;
    while (mid >= 0 && a[mid] == x)
    {
        cnt++;
        mid--;
    }
    while (i < n && a[i] == x)
    {
        i++;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}