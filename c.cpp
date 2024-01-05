#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int freq[26]={0};
    for(int i=0; i<x.size(); i++)
    {
        int c=x[i]-'a';
        freq[c]++;
    }
    string z="goodbye2023";
    for(int i=0; i<z.size(); i++)
    {
        int c=z[i]-'a';
        if(freq[c]==0)
        {
            cout << "No";
            return 0;
        }
        else
        {
            freq[c]--;
        }
    }
    cout << "Yes";

    return 0;
}
