#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int rt = sqrt(n);

    if(rt*rt != n)
    {
        cout << "no";
    }
    else
    {
        bool b = true;
        for(int i=2; i<rt; i++)
        {
            if(rt%i == 0)
            {
                b = false;
                break;
            }
        }
        if(b)cout << "yes";
        else cout << "no";
    }

    return 0;
}
