#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    ll start = 0;
    ll end = n;
    ll mid;
    ll ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid <= n)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;

return 0;
}
