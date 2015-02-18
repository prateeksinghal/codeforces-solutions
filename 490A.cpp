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
    ll t, n, i, j, x, mini;
    ll arr[4][10000] = {0, 0};
    ll hash[4] = {0};
    cin >> n;
 
    for(i = 1; i <= n; i++)
    {
    	cin >> x;
    	hash[x]++;
    	arr[x][i] = 1;
    }
   	mini = min(hash[1],min(hash[3], hash[2]));
   	cout << mini << endl;
   	for(i = 0; i < mini; i++)
   	{
   		for(j = 0; j < 10000; j++)
   		{
   			if(arr[1][j] == 1)
   			{
   				cout << j << " ";
   				arr[1][j] = 0;
   				break;
   			}	
   		}
   		for(j = 0; j < 10000; j++)
   		{
   			if(arr[2][j] == 1)
   			{
   				cout << j << " ";
   				arr[2][j] = 0;
   				break;
   			}	
   		}
   		for(j = 0; j < 10000; j++)
   		{
   			if(arr[3][j] == 1)
   			{
   				cout << j << " ";
   				arr[3][j] = 0;
   				break;
   			}	
   		}
   		cout << endl;


   	}


    return 0;

}