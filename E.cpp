#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==2)return true;
    else
    {
        bool b = true;
        for(int d = 2; d<=n/2; d++)
        {
            if(n%d==0)
            {
                b = false;
                break;
            }
        }
        return b;
    }
}

int main()
{
    int k;
    cin >> k;

    int n1 = 3, cnt = 0;

    while(cnt != k)
    {
        if(isprime(n1+2))
        {
            cout << n1 << " " << n1+2 << endl;
            cnt ++;
        }

        n1++;
        while(!isprime(n1))n1++;
    }

    return 0;
}
