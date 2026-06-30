
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int x,y;
	cin >> x >> y;
	if(x < y){
		cout << "NO" << '\n';
		return;
	}
	if(x % y == 0){
		cout << "YES" << '\n';
		return;
	}
	else{
		cout << "NO" << '\n';
		return;
	}
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