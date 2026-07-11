
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int N; cin >> N;
	vector<int> arrival(N);
	for(int i = 0; i < N ; i++){
		int time; cin >> time;
		arrival[i] = time;
	}
	int prefixMax = 0;
	ll waitTime = 0;

	for(int& time : arrival){
		waitTime += max(0, prefixMax - time);
		prefixMax = max(prefixMax, time);
	}
	cout << waitTime << '\n';
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