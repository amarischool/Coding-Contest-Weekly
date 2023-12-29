#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], freq[55]={0};
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int usum = 0;
    for(int i=1; i<=50; i++)
    {
        if(freq[i]==1)
        {
            usum += i;
        }
    }
    cout << usum;

    return 0;
}
