//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,x=-1,y=-1;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    sort(a,a+n);
    loop(i,n){
        if(a[i]==a[i+1]){
            i++;
        }else{
            if(x==-1) x=a[i];
            else if(y==-1) y=a[i];
        }
        if(x!=-1 && y!=-1){
            cout<<x<<" "<<y<<endl;
            break;
        }
    }
    return 0;
}