#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N+1);
  for (int i = 0; i < N+1; i++) cin >> A.at(i);
  vector<long long> num_vertex(N+1, 1);
  num_vertex.at(N) = A.at(N);
  for (int i = N-1; i > 0; i--) num_vertex.at(i) = num_vertex.at(i+1) + A.at(i);
  long long from_root = 1;
  bool exist_ans = true;
  int index = -1;
  for (int i = 1; i < N+1; i++)
  {
    from_root = 2*(from_root - A.at(i-1));
    if (from_root <= 0)
    {
      exist_ans = false;
      break;
    }
    if (from_root < num_vertex.at(i)) num_vertex.at(i) = from_root;
    else
    {
      index = i;
      break;
    }
    if (i == N) exist_ans = false;
  }
  if (N == 0)
  {
    if (A.at(0) != 1) cout << -1 << endl;
    else cout << 1 << endl;
  }
  else if (exist_ans)
  {
    if (index != -1)
    {
      for (int i = index; i > 0; i--)
      {
        if (num_vertex.at(i) < num_vertex.at(i-1) - A.at(i-1))
        {
          num_vertex.at(i-1) = num_vertex.at(i) + A.at(i-1);
        }
        else break;
      }
    }
    long long ans = 0;
    for (int i = 0; i < N+1; i++)
    {
      ans += num_vertex.at(i);
    }
    cout << ans << endl;
  }
  else cout << -1 << endl;
}