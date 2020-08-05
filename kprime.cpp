#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  long long int t,n,a[1000001],b,p;
  //long long int m = 1000000009;
  a[1] = 1;
  a[2] = 2;
  for(int i=3;i<1000001;i++)
  {
    if(i%2==0)
    {
      a[i] = 2;
    }
    else{
    	a[i] = i;
    }

  }


  for(int i=3;i*i<1000001;i++)
  {
    if(a[i]==i)
    {
      for(long int j=i*i;j<1000001;j=j+i)
      {
        if(a[j]==j)
        {
          a[j] = i;
        }
      }
    }
  }

  int e[1000001];
  e[1] = 0;

  for(int i=2;i<1000001;i++)
  {
    int x = i;
    int y=0;
    int z=0;
    int prev;
    while(x!=1)
    {

      if(z==0)
      {
        prev = a[x];
        x = x/a[x];
        y++;
        z=1;
      }
      else{
      	int s;
      	s = a[x];
      	x = x/a[x];
        if(s!=prev)
        {
        	prev = s;
          y++;
        }
      }

    }

    e[i] = y;

  }


  //cout << e[3] << " " << e[200] << " " << e[8] << "  " << e[15] << " " << e[18] << endl;

  cin >> t;

  for(int i=0;i<t;i++)
  {
    cin >> b >> p >> n;
    int sum=0;
    for(int j=b;j<=p;j++)
    {
      if(e[j] == n)
      {
        sum++;
        //cout << j << " ";
      }
    }
    //cout << endl;
    cout << sum << endl;
  }


}
