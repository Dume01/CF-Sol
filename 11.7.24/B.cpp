#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,k;
    cin >> n >> k;
    int ans=0;
    vector<int> arr(k);
    int maxi=0;
    for(int i=0;i<k;i++)
    {
      cin >> arr[i];
      maxi=max(maxi,arr[i]);
    }
    int f=0;
    for(int i=0;i<k;i++)
    { 
      if(arr[i]==maxi && !f)
      {
          f=1;
      }  
      else
        ans+=arr[i]-1+arr[i];
    }
    cout << ans << endl;
  }
}
