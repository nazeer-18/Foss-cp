// 21161 Shaik Nazeer CSE-B
#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> ans;
    ans.push_back(1);
    for (i = 2; i <= n; i++)
    {
        int j = 0, carry = 0, temp = 0, len = ans.size();
        for (j=0; j < len; j++)
        {
            temp = ans[j] * i + carry;
            ans[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry = temp % 10;
        }
    }
    reverse(ans.begin(), ans.end());
    int len = ans.size();
    for (i = 0; i < len; i++)
    {
        cout << ans[i];
    }
    return 0;
}