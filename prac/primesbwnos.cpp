#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPrime(int n)
{
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int a, b;
    cin>>a>>b;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
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
