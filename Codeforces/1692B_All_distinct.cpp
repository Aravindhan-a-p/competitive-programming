
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int n; //array size
	cin >> n;
	unordered_set<int> st;
	int distinctElements = 0;
	for(int i = 0; i < n ; i++){
		int x;
		cin >> x;
		st.insert(x);
	}
	distinctElements = st.size();
	int parity = (n - distinctElements) % 2;
	if(parity == 0) //same parity. so we can return the number of distinct elements 
		cout << distinctElements << '\n';
	else cout << distinctElements-1 << '\n';
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