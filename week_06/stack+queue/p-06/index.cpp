#include <bits/stdc++.h>
using namespace std;
void balancedString(string s)
{
    stack<char> st;
    for (char x : s)
    {
        if (x == '(')
        {
            st.push(x);
        }
        else if (x == ')')
        {
            st.pop();
        }
    }
    if (st.size() != 0)
    {
        cout << "not a balanced exepression" << endl;
    }
    else
    {
        cout << "it is a balanced express" << endl;
    }
}
int main()
{
    return 0;
}