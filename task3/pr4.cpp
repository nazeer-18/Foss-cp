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
    int sum = a[0],maxSum = sum;
    loop1(i,n-1){
        if(sum<0){
            sum=0;
        }
        sum+=a[i];
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum<<endl;
    return 0;
}