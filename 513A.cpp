#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

#define s(n) scanf("%d",&n) 
#define sc(n) scanf("%c",&n)
#define s64(n) scanf("%l64d",&n)
#define sd(n) scanf("%lf",&n)

#define p(n) printf("%d",n) 
#define p64(n) printf("%l64d",n)
#define pd(n) printf("%lf", n)
#define nl printf("\n")
#define sp printf(" ")
#define pcase(i) printf("Case #%lld: ", i + 1)
#define pc(a) putchar(a)

#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define rt return

#define fill(a, v) memset(a, v, sizeof(a))

#define rep(i, n) for(i = 0; i < n; i++)
#define foreach(v, c) for( typeof( (c).begin()) v = (c).begin(); v != (c).end(); ++v)

using namespace std;

pair<ll, pair<ll, ll> > extendedEuclid(ll a, ll b) {
    ll x = 1, y = 0;
    ll xLast = 0, yLast = 1;
    ll q, r, m, n;
    while(a != 0) {
        q = b / a;
        r = b % a;
        m = xLast - q * x;
        n = yLast - q * y;
        xLast = x, yLast = y;
        x = m, y = n;
        b = a, a = r;
    }
    return make_pair(b, make_pair(xLast, yLast));
}
 
ll modInverse(ll a, ll m) {
    return (extendedEuclid(a,m).second.first + m) % m;
}

int main()
{
    int n1,n2,k1,k2;
    s(n1);
    s(n2);
    s(k1);
    s(k2);
    if(n1 == n2)
        cout << "Second" << endl;
    else if(n1 > n2)
        cout << "First\n";
    else
        cout << "Second\n";
	rt 0;
}