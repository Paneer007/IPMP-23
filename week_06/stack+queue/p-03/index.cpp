#include <bits/stdc++.h>
using namespace std;
class fakeQueue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    void dequeue()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }
    void front()
    {
      if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << endl;
    }
};
int main()
{
    fakeQueue fq;
    fq.enqueue(1);
    fq.enqueue(2);
    fq.enqueue(3);
    fq.front();
    fq.dequeue();
    fq.front();    
    return 0;
}