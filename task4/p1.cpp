//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int a[n];
    loop(i,n){
        cin>>a[i];
    }
    int ans=a[0];
    if(n==1) {
        cout<<a[0]<<endl;
    }
    else if(a[0]>a[1]){
        cout<<a[1]<<endl;
    }
    else if(a[n-1]>a[n-2]){
        cout<<a[n-1]<<endl;
    }
    else{
        for(i = 1; i < n-1; i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cout<<a[i]<<endl;
                return 0;
            }
        }
    }
    return 0;
}