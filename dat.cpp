#include<stdio.h>
using namespace std;
int n, b, c;
  cin >> n >> b >> c ;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int i = 0, j = 0;
  int ans = 0;
  int cnt1 = 0, sum = 0, cnt2 = 0;
  while (j < n)
  {
    sum += a[j];
    while (i <= j && sum > c)
    {
      sum -= a[i];
      i++;
    }
    cnt1 += (j - i + 1);
    j++;
  }
  i = 0; j = 0; sum = 0;
  while (j < n)
  {
    sum += a[j];
    while (i <= j && sum > b - 1)
    {
      sum -= a[i];
      i++;
    }
    cnt2 += (j - i + 1);
    j++;
  }
  cout << cnt1 - cnt2 << "\n";    