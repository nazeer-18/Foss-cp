//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,bitmask=1,cnt=0;
    cin>>n;
    while(n) {
        if(n&bitmask){
            cnt++;
        }
        n = n>>1;
    }
    cout<<cnt<<endl;
    return 0;
}