#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
    {
      int n, m;
      cin >> n >> m;
      int a[305][305];
      bool flag = true;
      for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
          {
            cin >> a[i][j];
            if (i == 0 && j == 0 || i == 0 && j == m - 1 || i == n - 1 && j == 0 || i == n - 1 && j == m - 1)
              {
                if (a[i][j] > 2) flag = false;
                else a[i][j] = 2;
              }
            else if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
              {
                if (a[i][j] > 3) flag = false;
                else a[i][j] = 3;
              }
            else
              {
                if (a[i][j] > 4) flag = false;
                else a[i][j] = 4;
              }
          }
      if (!flag) cout << "NO" << endl;
      else
        {
          cout << "YES" << endl;
          for (int i = 0; i < n; ++i)
            {
              for (int j = 0; j < m; ++j)
                cout << a[i][j] << " ";
              cout << endl;
            }
        }
    }

  return 0;
}
