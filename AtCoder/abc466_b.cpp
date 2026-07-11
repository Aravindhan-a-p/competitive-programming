
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
  vector<int> ballSize(M+1,-1);
  for(int i = 0; i < N; i++){
    int color,size;
    cin >> color >> size;
    if(ballSize[color] < size){
      ballSize[color] = size;
    }
  }

  for(int i = 1; i <= M; i++){
    cout << ballSize[i] << ' ';
  }
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