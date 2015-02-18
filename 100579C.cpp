#include <stdio.h>
#include <algorithm>
#include <iostream>

#define MOD 1000000007
#define ll long long

using namespace std;

ll mat1[2010][2010];
ll mat2[2010][2010];

int main()
{
    ll t, i, j, q, x, y;
    char ch;
    cin >> t;
    for(q = 1;q <= t; q++)
    {
        cin >> x; 
        cin >> ch ;
        cin >> y;
        for(i = 0; i <= x; i++)
        {
            mat1[i][0] = 1;
        }

        for(i = 0;i <= y; i++)
        {
            mat2[0][i] = 1;
        }

        for(i = 2; i <= x; i++)
        {
            for(j = 0; j <= min(y, i - 1); j++)
            {

                mat1[i][j] = 0;
                if(j > 0)
                {
                    mat1[i][j] = mat1[i][j] + mat1[i][j - 1];
                }
                if((i - j) > 1)
                {
                    mat1[i][j] = mat1[i][j] + mat1[i - 1][j];
                }
                mat1[i][j] = mat1[i][j] % MOD;
            }
        }

        for(i = 1; i <= x; i++)
        {
            for(j = 0; j <= y; j++)
            {
                if(i > j)
                {
                    if(j < y)
                    {
                        mat2[i][j] = 0;
                    }
                    else
                    {
                        mat2[i][j] = mat2[i - 1][j];
                    }
                }
                else if(i < j)
                {
                    mat2[i][j] = mat2[i][j - 1] + mat2[i - 1][j];
                }
                else
                {
                    mat2[i][j] = mat2[i - 1][j];
                }
                mat2[i][j] = mat2[i][j] % MOD;
            }
        }
        cout << "Case #" << q << ": " << mat1[x][y] << " " << mat2[x][y] << endl;
    }
    return 0;
}