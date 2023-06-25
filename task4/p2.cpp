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
    int i = 0, j = n-1,k = 0;
    while(j>0 && a[j]==2) j--;
    while(i<n && a[i]==0) i++;
    while(i<j && k< n) {
        if(a[k]==0 && i<k){
            swap(a[i],a[k]);
            i++;
        }else if(a[k]==2 && k<j){
            swap(a[j],a[k]);
            j--;
        }else k++;
    }
    loop(i,n) cout<<a[i]<<" ";
    return 0;
}