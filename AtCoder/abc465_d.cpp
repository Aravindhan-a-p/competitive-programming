
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	ll x, y, k;
    cin >> x >> y >> k;
    
    ll operations = 0;
    
    while (x != y) {
        if (x > y) {
            x /= k;
        } else {
            y /= k;
        }
        operations++;
    }
    
    cout << operations << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}