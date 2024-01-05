#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int it = 0;
    int i = 0;
    while(it < k)
    {
        i = a[i]-1;
        it ++;
    }
    cout << a[i];
}
