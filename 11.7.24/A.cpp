#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    priority_queue<int,vector<int>,greater<int>> pq;
    int a,b,c;
    cin >> a >> b >> c;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    for(int i=0;i<5;i++)
    {
      int n=pq.top();
      pq.pop();
      n++;
      pq.push(n);
    }
    a=pq.top();
    pq.pop();
    a*=pq.top();
    pq.pop();
    a*=pq.top();
    
    cout << a << endl;
  }
}
