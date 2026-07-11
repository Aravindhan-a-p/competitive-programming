
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int n; cin >> n;
	vector<int> temperatures;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		temperatures.push_back(temp);
	}
	int maxHeight = 1;
	for(int i = 0; i < n-1; i++){
		maxHeight = max(maxHeight,min(temperatures[i],temperatures[i+1]));
	}
	cout << maxHeight << '\n';
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