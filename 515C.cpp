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

ll arr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int main()
{
    ll n, i, l;
    string str;
    sl(n);
    cin >> str;
    l = str.size();
    //hash[10] = {0};
    string temp = "";
    rep(i, l)
    {
        if(str[i] >= '2')
        {
            if(str[i] == '4')
                temp += "223";
            else if(str[i] == '6')
                temp += "35";
            else if(str[i] == '8')
                temp += "2227";
            else if(str[i] == '9')
                temp += "7332";
            else
                temp += str[i];
        }
    }
    sort(temp.bg, temp.end);
    repr(i, temp.size() - 1, 0, 1)
        pc(temp[i]);
    nl;
    /*repr(i, 9, 0, 1)
    {
        if(hash[i] != 0 && (i == 2 || i == 3 || i == 5 || i == 7))
        {
            in = i;
            break;
        }
    }*/

    rt 0;
}