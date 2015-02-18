/* Copyright (c) 2015 Prateek Singhal */

#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

#define s(n) scanf("%d",&n) 
#define sc(n) scanf("%c",&n)
#define sl(n) scanf("%lld",&n)
#define s64(n) scanf("%I64d",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s", n)
#define gc getchar()

#define p(n) printf("%d",n) 
#define pl(n) printf("%lld",n) 
#define p64(n) printf("%I64d",n)
#define pd(n) printf("%lf", n)
#define ps(n) printf("%s", n)
#define nl printf("\n")
#define sp printf(" ")
#define pcase(i) printf("Case #%lld: ", i + 1)
#define pc(a) putchar(a)

#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define rt return
#define nxtp next_permutation
#define bg begin()
#define end end()

#define strc(a, b) strcpy(a, b.c_str())

#define fill(a, v) memset(a, v, sizeof(a))

#define rep(i, n) for(i = 0; i < n; i++)
#define _rep(i, a, b, c) for(i = a; i <= b; i = i + c)
#define repr(i, a, b, c) for(i = a; i >= b; i = i - c)

#define foreach(v, c) for( typeof( (c).begin()) v = (c).begin(); v != (c).end(); ++v)

using namespace std;

int ch(vector<int> vec)
{
	int i, f = 0;
	rep(i, vec.size())
	{
		if(vec[i] == 0)
		{
			f = 1;
			break;
		}
	}
	if(f == 0)
		rt 1;
	else 
		rt 0;

}

int main()
{
	int n, m, x, y, f = 0, i, z;
	s(n);s(m);
	std::vector<int> b;
	std::vector<int> g;
	rep(i, n)
		b.pb(0);
	rep(i, m)
		g.pb(0);
	s(x);
	rep(i, x)
	{
		s(z);
		b[z] = 1;
	}
	s(y);
	rep(i, y)
	{
		s(z);
		g[z] = 1;
	}
	rep(i, 10000)
	{
		if(b[i % n] == 1 || g[i % m] == 1)
		{
			b[i % n] = 1;
			g[i % m] = 1;
		}
		if(ch(b) == 1 && ch(g) == 1)
		{
			f = 1;
			break;
		}
	}
	if(f == 1)
		cout << "Yes\n";
	else
		cout << "No\n";
	rt 0;
}