
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
  int N,M;
  cin >> N >> M;
  vector<pair<int,int>> operations(M);

  for(int i = 0; i < M ; i++){
    cin>>operations[i].first>>operations[i].second;
  }
  //from reverse. so that we can see if particular row is touched or not
  ll pieces = 0;
  vector<bool> seenRow(N+1,false);
  vector<bool> seenCol(N+1,false);

  for(int i = M-1; i >= 0; i--){
    int row = operations[i].first;
    int col = operations[i].second;

    if(!seenRow[row] && !seenCol[col]){
      pieces++;
    }
    seenRow[row] = true;
    seenCol[col] = true;
  }
  cout << pieces << "\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  //cin >> t;
  while(t--){
  solve();
  }
  return 0;
}