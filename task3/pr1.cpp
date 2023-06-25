//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    loop(i,n) cin>>a[i];
    sort(a,a+n);
    cout<<a[n-k]<<endl;
    return 0;
}