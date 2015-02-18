#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int m,n,a;
    cin >> m;
    cin >> n;
    cin >> a;
    cout << (((m+a-1)/a)*((n+a-1)/a)) <<  endl;

    return 0;
}