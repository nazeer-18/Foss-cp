//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,cnt=1;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    sort(a,a+n);
    loop(i,n-1) {
        if(a[i]==a[i+1]){
            cnt++;
        }else {
            if(cnt>n/2){
                cout<<a[i-1]<<endl;
                return 0;
            }
            cnt=1;
        }
    }
    cout<<a[n-1]<<endl;
    return 0;
}