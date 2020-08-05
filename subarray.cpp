#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  long long int t,n;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    cin >> n;
    long long int a[n],b[n];
    for(int j=0;j<n;j++)
    {
      cin >> a[j];
    }
    b[0] = 1;
    long long int sum = 0;
    for(int j=0;j<n-1;j++)
    {
      if(a[j+1]>=a[j])
      {
        b[j+1] = b[j] + 1;
      }
      else{
        b[j+1] = 1;
      }

      sum = sum+b[j+1];

    }

    sum = sum + b[0];

    cout << sum << endl;

  }


}
