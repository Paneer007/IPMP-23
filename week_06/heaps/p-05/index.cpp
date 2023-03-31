#include <bits/stdc++.h>
using namespace std;
void print_last_lines(string name, int n)
{
    if (n <= 0)
    {
        return;
    }
    string s = "";
    queue<string> q;
    for (auto x : name)
    {
        if (x == '\n')
        {
            q.push(s);
            s = "";
            if (q.size() > 10)
            {
                q.pop();
            }
        }
        else
        {
            s += x;
        }
    }
    q.push(s);
    s = "";
    if (q.size() > 10)
    {
        q.pop();
    }
    vector<string> arr;
    while (!q.empty())
    {
        arr.push_back(q.front());
        q.pop();
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
int main()
{
    string str1 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
                  "\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
                  "\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25";
    string str2 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7";
    string str3 = "\n";
    string str4 = "";

    print_last_lines(str1, 10);
    cout << "-----------------\n";

    // print_last_lines(str2, 10);
    // cout << "-----------------\n";

    // print_last_lines(str3, 10);
    // cout << "-----------------\n";
    // ;

    // print_last_lines(str4, 10);
    cout << "-----------------\n";
    return 0;
}