#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n==0)
    {
        cout << 0;
        return 0;
    }

    while(int(log10(n)))
    {
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        n = sum;
    }

    cout << n;

    return 0;
}
