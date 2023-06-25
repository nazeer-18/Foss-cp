//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    reverse(a,a+n);
    loop(i,n) cout<<a[i]<<" ";
    return 0;
}