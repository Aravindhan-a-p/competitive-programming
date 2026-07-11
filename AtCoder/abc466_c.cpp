
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int N;
    if (!(cin >> N)) return;

    long long pairs = 0;
    int right = 2;

    for (int left = 1; left <= N; left++) {
        
        right = max(right, left + 1);
        while (right <= N) {
            cout << "? " << left << " " << right << endl;
            
            string result;
            cin >> result;
            
            if (result == "Yes") {
                right++;
            } else {
                break;
            }
        }
        pairs += (right - 1 - left);
    }

    cout << "! " << pairs << endl;
}

int main(){
  int t = 1;
 // cin >> t;
  while(t--){
  solve();
  }
  return 0;
}