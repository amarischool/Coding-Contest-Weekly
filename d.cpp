#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    stack<char> st;
    bool b = true;

    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '(')
        {
            st.push(x[i]);
        }
        else if (!st.empty() && x[i] == ')')
        {
            st.pop();
        }
        else
        {
            b = false;
            break;
        }
    }

    if (b && st.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
