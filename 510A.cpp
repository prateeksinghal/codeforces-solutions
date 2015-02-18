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

int main()
{
    int n, m, i, j;
    string str;
    
    cin >> n >> m;
    for(i = 1; i <= n; i++)
    {
        if(i % 2)
        {
            str = "";
            for(j = 1; j <= m; j++)
                str += '#';
        }
        else if((i % 2 == 0) && (i % 4 == 0))
        {
            str = "#";
            for(j = 2; j <= m; j++)
                str += '.';
        }
        else
        {
            str = "";
            for(j = 2; j <= m; j++)
                str += '.';
            str += '#';
        }
        cout << str << endl;
    }
    return 0;
}