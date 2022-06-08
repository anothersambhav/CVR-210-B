#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, sum = 0;
    bool flag = 0;
    cin>>n;
    int original = n;
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Non-Prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
    while(n > 0)
    {
        int last = n % 10;
        n = n /10;
        sum += pow(last, 3);
    }
    if(sum == original)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Non-Armstrong"<<endl;
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
