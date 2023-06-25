//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>>n;
    int a[n];
    loop(i,n) {
        cin>>a[i];
    }
    for(; i < n; i++) {
        for(j = i+1; j < n; j++){
            if(a[i]<a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    loop(i,n) {
        cout<<a[i]<<" ";
    }
    return 0;
}