#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
      int n,m,k;
      cin >> n >> m >> k;
      int i=0;
      vector<int> arr(n);
      while(n>=k)
      {
        arr[i]=n;
        n--;
        i++;
      }
      while(n>m)
      {
        arr[i]=n;
        n--;
        i++;
      }
      for(int j=1;j<=n;j++)
      {
        arr[i]=j;
        i++;
      }
      for(i=0;i<arr.size();i++)
        cout << arr[i] << " ";
      cout << endl;
  }
}
