#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a%b==0)
    {
        for(int i=1; i<=b; i++)
        {
            cout << a/b << " ";
        }
    }
    else
    {
        int r = a%b;
        for(int i=1; i<=b; i++)
        {
            if(i<=b-r)
            {
                cout << a/b << " ";
            }
            else
            {
                cout << a/b+1 << " ";
            }
        }
    }
    return 0;
}
