#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  long long int t,n,a[1000001];
  long long int m = 1000000009;
  a[1] = 0;
  a[2] = 1;
  a[3] = 1;
  cin >> t;
  for(int i=4;i<1000001;i++)
  {
      a[i] = (a[i-2]%m + a[i-3]%m)%m;
  }
  for(int i=0;i<t;i++)
  {
    cin >> n;


    cout << a[n] << endl;
  }


}
