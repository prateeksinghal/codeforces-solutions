#include<iostream>
using namespace std;
int main()
{
    int a,b,count;
    cin >> a >> b;
    if(b>a)
        cout << a << endl;
    else
    {
        count=0;
        while(a>0)
        {
            if(a>=b)
            {
            a=a-b+1 ;
            count=count + b;
            }
            else
            {
                count+=a;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}