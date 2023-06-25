// 21161 Shaik Nazeer CSE-B
#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n, sum, j, k, tempSum = 0;
    cin >> n >> sum;
    int a[n];
    loop(i, n) cin >> a[i];
    sort(a, a + n);
    loop(i, n)
    {
        tempSum = sum-a[i];
        if(tempSum<0) {
            cout<<"False\n";
            return 0;
        }
        j = i + 1, k = n - 1;
        while (j < k)
        {
            if(tempSum==a[j]+a[k]){
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                return 0;
            }
            else if(a[j]+a[k]<tempSum){
                j++;
            }else{
                k--;
            }
        }
    }
    return 0;
}