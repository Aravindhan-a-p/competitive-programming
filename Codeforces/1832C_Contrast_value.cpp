#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int n; //array size
	cin >> n;
	vi a(n); //array a
	for(int& x : a){ cin >> x; }

	n = unique(all(a)) - a.begin();//size of array a with distinct elements only
	
	int ans = n;
	for(int i = 0; i+2 < n ; i++){
		//we can remove a[i+1] if they are in desc or asc order
		ans -= (a[i+2] > a[i+1]) && (a[i+1] > a[i]); 
		ans -= (a[i+2] < a[i+1]) && (a[i+1] < a[i]); 
	}
	cout << ans << '\n';
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