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
//#define pcase(i) printf("Case #%lld: ", i + 1)
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

ll fact(ll n)
{
    ll i, f = 1;
    rep(i, n)
        f *= (i + 1);
    rt f;
}

int main()
{
    int n, m, i, j, k, sum, temp, maxi, sum1;
    s(n);
    s(m);
    string str = "";
    rep(i, n)
        str += (char) ('1' + i);
    //cout << str << endl;
    maxi = -1;
    do
    {
        sum1 = 0;
        rep(i, n)
        {
            sum = 0;
            for(j = i; j < n; j++)
            {
                temp = str[i] - '0';
                for(k = i + 1; k <= j; k++)
                {
                    temp = min(temp, str[k] - '0');
                }
                sum += temp;
            }
            sum1 += sum;
        }
        if(sum1 > maxi)
            maxi = sum1; 
    }while ( std::next_permutation(str.begin(),str.end()) );
    vector<string> vec;
    str = "";
    rep(i, n)
        str += (char) ('1' + i);
    do
    {
        sum1 = 0;
        rep(i, n)
        {
            sum = 0;
            for(j = i; j < n; j++)
            {
                temp = str[i] - '0';
                for(k = i + 1; k <= j; k++)
                {
                    temp = min(temp, str[k] - '0');
                }
                sum += temp;
            }
            sum1 += sum;
        }
        if(sum1 == maxi)
            vec.pb(str); 
    }while ( std::next_permutation(str.begin(),str.end()) );
    sort(vec.begin(), vec.end());
    rep(i, n)
    {
        pc(vec[m - 1][i]);
        sp;
    }
    nl;
	rt 0;
}