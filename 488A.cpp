#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<set>
#include<vector>
#include<string.h>
#include<string>

#define ll long long
#define MOD 1000000007

using namespace std;
ll abso(ll n)
{
    if(n < 0)
        return (n * -1);
    else
        return n;

}
int check(ll n)
{
    ll x, f = 0;
    while(n > 0)
    {
        x = n % 10;
        n = n / 10;
        if(x == 8)
        {
            f = 1;
            break;
        }
    }
    if(f == 1)
        return 1;
    else
        return 0;
}
int main()
{
    ll t, n, i, ans;
    cin >> n;
    ans = 1;
    for(i = n + 1;;i++)
    {
        if(check(abso(i)))
        {
            cout << ans << endl;
            break;
        }
        else
            ans++;
    }

    return 0;

}