#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, sum = 0;
    cin>>n;
    while(n > 0)
    {
        int last = n % 10;
        sum = (sum * 10) + last;
        n = n /10;
    }
    cout<<sum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef SUGAR_MOMMY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
