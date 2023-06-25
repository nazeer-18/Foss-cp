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
    string s,temp;
    while(n) {
        temp = n%2+'0';
        s = temp+s;
        n/=2;
    }
    cout<<s<<endl;
    return 0;
}